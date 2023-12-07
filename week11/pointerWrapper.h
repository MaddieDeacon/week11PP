#ifndef POINTER_WRAPPER_H
#define POINTER_WRAPPER_H
//headers to stop potential prevent 
//multiple inclusions of the header in the same compilation unit.

#include <iostream>

class pointerWrapper {
public:
    //declare Constructor
    pointerWrapper(int value);

    //declare Destructor
    ~pointerWrapper();

    void print(void) const;

private:
    int* p;
};

#endif // POINTER_WRAPPER_H
