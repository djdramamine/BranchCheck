#ifndef fiveIncrementer_h_
#define fiveIncrementer_h_
#include "Interfaces/Incrementer.h"

class FiveIncrementer final : public Incrementer {
    private:
        void something();
    public:
        ~FiveIncrementer() = default;
        int increment(int x) override;
        int decrement(int x) override;
};

#endif