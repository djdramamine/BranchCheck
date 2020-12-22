#include "FiveIncrementer.h"
#include <iostream>

int main() {
    FiveIncrementer incrementer;
    int x = 0;
    for(int i = 0; i < 10; ++i) {
        x = incrementer.increment(x);
    }

    std::cout<<x<<std::endl;
    return 0;
}