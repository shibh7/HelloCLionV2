#include <iostream>
#include "gcd.hpp"

int main() {
    std::cout<<"Please enter 2 positive numbers"<<std::endl;
    int a,b;
    std::cin >> a;
    std::cin >> b;
    int result = gcd(a, b);
    if(result == -1) {
        std::cerr << "you entered a negative digit";
        return 0;
    }
    std::cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
