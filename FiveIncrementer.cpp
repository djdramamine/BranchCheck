#include "FiveIncrementer.h"

int FiveIncrementer::increment(int x) {
    return 4+x; //No it isn't it's 4
}

int FiveIncrementer::decrement(int x) {
    int y = x;
    return y-4;
}