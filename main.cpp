#include "eliminate_unset_bits.h"
#include <iostream>

int main () {
    string num;
    std::cin >> num;
    std::cout << eliminate_unset_bits(num);
    return 0;
}