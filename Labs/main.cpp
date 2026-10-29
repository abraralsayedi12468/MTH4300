#include <iostream>
#include <utility>
#include "polynomial.h"

int main() {
    Polynomial p(3);
    p.setCoeff(0, 4);
    p.setCoeff(1, 7);
    p.setCoeff(2, 2);

    Polynomial d = p.derivative();
    std::cout << "derivative: " << d.getCoeff(0) << " "
              << d.getCoeff(1) << "\n";

    Polynomial q = p;
    q.setCoeff(0, 10);
    std::cout << "original: " << p.getCoeff(0) << "\n";
    std::cout << "copy: " << q.getCoeff(0) << "\n";

    Polynomial r(1);
    r = p;
    r.setCoeff(1, 20);
    std::cout << "original: " << p.getCoeff(1) << "\n";
    std::cout << "assigned copy: " << r.getCoeff(1) << "\n";

    Polynomial s = std::move(q);
    std::cout << "move constructor: " << s.getCoeff(0) << "\n";

    r = std::move(s);
    std::cout << "move assignment: " << r.getCoeff(0) << "\n";

    Polynomial c(1);
    c.setCoeff(0, 3);
    Polynomial zero = c.derivative();
    std::cout << "constant derivative: " << zero.getCoeff(0) << "\n";

    return 0;
}