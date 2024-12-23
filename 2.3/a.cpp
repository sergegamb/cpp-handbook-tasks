#include <iostream>

int main() {
    int x1, y1, x2, y2;
    int dx, dy;

    std::cin >> x1 >> y1 >> x2 >> y2;
    dx = std::abs(x2 - x1);
    dy = std::abs(y2 - y1);
    if (dx == 0 || dy == 0 || dx == dy) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return (0);
}
