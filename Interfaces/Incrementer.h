#ifndef incrementer_h_
#define incrementer_h_

class Incrementer {
    public:
        ~Incrementer() = default;
        virtual int increment(int x) = 0;
};
#endif