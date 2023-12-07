#include "pointerWrapper.h" //provide the class decleration 

// Constructor for pointer wrapper
pointerWrapper::pointerWrapper(int value) {
    // Allocate memory for int pointer
    p = new int(value);
    std::cout << "Allocating memory for int pointer. ";
    print();
}

// Destructor for pointer wrapper
pointerWrapper::~pointerWrapper() {
    // Release memory from int pointer so can be used again 
    delete p;
    std::cout << "Releasing memory from int pointer." << std::endl;
}

void pointerWrapper::print(void) const {
    std::cout << "Hi, I am a wrapped pointer with value: " << *p << std::endl;
}
