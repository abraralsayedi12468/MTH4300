#include <iostream>
#include <cmath>

class Point {
public:
    Point(double x, double y) : x_(x), y_(y) {}

    double x() const { return x_; }
    double y() const { return y_; }

    double distance_from_origin() const {
        return std::sqrt(x_ * x_ + y_ * y_);
    }

    void translate(double dx, double dy) {
        x_ += dx;
        y_ += dy;
    }

private:
    double x_;
    double y_;
};

int main() {
    Point p(3.0, 4.0);
    std::cout << p.x() << " " << p.y() << "\n";   // 3 4
    std::cout << p.distance_from_origin() << "\n"; // 5

    p.translate(1.0, 0.0);
    std::cout << p.x() << " " << p.y() << "\n";   // 4 4

    return 0;
}