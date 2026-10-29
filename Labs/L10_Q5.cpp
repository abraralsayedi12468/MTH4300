#include <cstring>

String::String(const String& other) {
    len_ = other.len_;
    data_ = new char[len_ + 1];
    std::strcpy(data_, other.data_);
}

String& String::operator=(const String& other) {
    if (this == &other) return *this;
    delete[] data_;
    len_ = other.len_;
    data_ = new char[len_ + 1];
    std::strcpy(data_, other.data_);

    return *this;
}