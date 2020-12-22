#ifndef fiveIncrementer_h_
#define fiveIncrementer_h_
#include "Interfaces/Incrementer.h"

class FiveIncrementer : public Incrementer {
    public:
        static int increment(int x) override;
};

#endif