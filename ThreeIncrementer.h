#ifndef threeIncrementer_h_
#define threeIncrementer_h_
#include "Interfaces/Incrementer.h"

class ThreeIncrementer final : public Incrementer{
    private:
        void something();
    public:
        ~ThreeIncrementer() = default;
        int increment(int x) override;
};

#endif