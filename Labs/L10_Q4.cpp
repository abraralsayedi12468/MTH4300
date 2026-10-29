// Snippet A shallow copy, copies other location, so two individual pointer spoint to same location. so both share the same arr. 
String::String(const String& other) {
    data_ = other.data_; // no new allocation
    len_  = other.len_;
}

// Snippet B — missing self-assignment guard, its missing the self-assignment check, so a = a deletes its own text before copying it, add if (this == &other) return *this; first.
String& String::operator=(const String& other) {
    delete[] data_;
    len_  = other.len_;
    data_ = new char[len_ + 1];
    std::strcpy(data_, other.data_);
    return *this;
}

// Snippet C — wrong cleanup order, it losess the old array’s address, then deletes the new array before using it move delete[] data_ before the new allocation.
String& String::operator=(const String& other) {
    if (this == &other) return *this;
    len_  = other.len_;
    data_ = new char[len_ + 1]; // old pointer overwritten before being freed
    delete[] data_;
    std::strcpy(data_, other.data_);
    return *this;
}

// Snippet D — wrong return type, it returns a copy instead of a reference to the updated object; change the return type from String to String&
String String::operator=(const String& other) {
    if (this == &other) return *this;
    delete[] data_;
    len_  = other.len_;
    data_ = new char[len_ + 1];
    std::strcpy(data_, other.data_);
    return *this;
}