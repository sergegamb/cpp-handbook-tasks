#include <iostream>

bool leap_year(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int main() {
    int m, y;

    std::cin >> m >> y;
    switch (m) {
        case (1):
        case (3):
        case (5):
        case (7):
        case (8):
        case (10):
        case (12):
            std::cout << "31";
            break;
        case (2):
            if (leap_year(y))
                std::cout << "29";
            else
                std::cout << "28";
            break;
        default:
            std::cout << "30";
            break;
    }
    return (0);
}
