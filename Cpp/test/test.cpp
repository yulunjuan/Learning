#include <iostream>

class Progression{
public:
    Progression(long f = 0):first(f), cur(f) {};
    virtual ~Progression() {};
    void printProgression() {};
protected:
    virtual long firstValue();
    virtual long nextValue();
protected:
    long first;
    long cur;

};



int main(){






    return 0;
}