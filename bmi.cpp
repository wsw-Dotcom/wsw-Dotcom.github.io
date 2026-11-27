#include <iostream>

int main() {
    int height, weight;
    if (!(std::cin >> height >> weight)) {
        return 1;
    }

    std::cout << (400 * weight >= height * height ? "Yes\n" : "No\n");
    return 0;
}
