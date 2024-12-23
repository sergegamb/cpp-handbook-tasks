#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "UNDEFINED";
    } else if (a * a + b * b == c * c ||
               b * b + c * c == a * a ||
               a * a + c * c == b * b) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return (0);
}
