#include <iostream>

int main() {
    int t;
   
    std::cin >> t;

    while (t--) {
        int x;
       
        std::cin >> x;

        int y;
        if (x % 2 == 0) {
            y = x - 1;
        } else {
            y = x - 2;
        }

        std::cout << y << std::endl;
    }

    return 0;
}
