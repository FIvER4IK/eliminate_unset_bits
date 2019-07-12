#include "eliminate_unset_bits.h"

long long eliminate_unset_bits(string number){
    int j = 0;
    for (int i = 0; i < number.length(); i++) {
        if (number[i] == 49) {
            j++;
        }
    }
    if(j == 0)
        return 0;
    long long result = 1, k = 1;
    while (k < j){
        result *= 2;
        result += 1;
        k++;
    }
    return result;
}
