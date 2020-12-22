#ifndef fiveIncrementer_h_
#define fiveIncrementer_h_
//#include "Interfaces/Incrementer.h"

class FiveIncrementer{
    private:
        void something();
    public:
        ~FiveIncrementer() = default;
        int increment(int x);
};

#endif