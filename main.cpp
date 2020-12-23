#include "FiveIncrementer.h"
#include "ThreeIncrementer.h"
#include <iostream>

int main() {
    FiveIncrementer five_incrementer;
    ThreeIncrementer three_incrementer;
    int x = 0;
    int y = 0;
    
    for(int i = 0; i < 10; ++i) {
        x = five_incrementer.increment(x);
        y = three_incrementer.increment(y);
    }

    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;

    std::cout<<five_incrementer.decrement(x)<<std::endl;
    std::cout<<three_incrementer.decrement(y)<<std::endl;

    return 0;
}