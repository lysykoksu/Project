#include <iostream>

int main() {
    int i = 0;
    do {
        if (i%2==0){
            std::cout<< i << " jest liczba parzysta." << std::endl;
        }
        else {
            std::cout << i << " jest liczba nieparzysta." << std :: endl;
        }
        i++;
        } while (i <= 10);
        return 0;
}