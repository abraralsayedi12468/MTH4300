class Polynomial { 
    private: 
        int size_;
        double* coeffs_; 
    public: 
        Polynomial(int size) : size_(size), coeffs_(new double[size_]) {
            for (int i = 0; i < size_; i++){ coeffs_[i] = 0; }
        }

    void setCoeff(int index, double value) {
        if(index >= 0 && index < size_) {coeffs_[index] = value;}
    }

    double getCoeff(int index) const { 
        if(index >= 0 && index < size_) { return coeffs_[index]; }
        return 0;
    }

    Polynomial(const Polynomial& other) : size_(other.size_), coeffs_(new double[size_]) {
        for (int i = 0; i < size_; i++) {
            coeffs_[i] = other.coeffs_[i];
        }
    }

    Polynomial& operator=(const Polynomial& other) {
        if (this == &other) return *this;

        double* newCoeffs = new double[other.size_];
        for (int i = 0; i < other.size_; i++) {
            newCoeffs[i] = other.coeffs_[i];
        }

        delete[] coeffs_;
        size_ = other.size_;
        coeffs_ = newCoeffs;

        return *this;
    }

    Polynomial(Polynomial&& other) noexcept : size_(other.size_), coeffs_(other.coeffs_) {
        other.size_ = 0;
        other.coeffs_ = nullptr;
    }

    Polynomial& operator=(Polynomial&& other) noexcept {
        if (this == &other) return *this;
        delete[] coeffs_; 

        size_ = other.size_;
        coeffs_ = other.coeffs_;

        other.size_ = 0;
        other.coeffs_ = nullptr;

        return *this;
    }
    Polynomial derivative() const {
    int newSize;

    if (size_ > 1) {
        newSize = size_ - 1;
    } else {
        newSize = 1;
    }

    Polynomial result(newSize);
    for (int i = 1; i < size_; i++) {
        result.setCoeff(i - 1, coeffs_[i] * i);
    }
    return result;
    }
    ~Polynomial() { delete[] coeffs_; }
};



