#include <iostream>

unsigned int sum(int max, int min) {
    if (max == min) {
        return max;
    }

    return max + sum(max - 1, min);
}

int main() {
    std::cout << "sum(50, 1): " << sum(50, 1) << std::endl;
    
    return 0;
}