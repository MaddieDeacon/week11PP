#include "pointerWrapper.h" //include header so we can use the class declaration.

int main(void) {
    {//outputs ointwrapper with value 1
        pointerWrapper p(1);
        p.print();
    }
    //releases memory 
    std::cout << std::endl << "Doing other stuff in the program..." << std::endl << std::endl;
    //outputs pointwrapper with value 64 
    pointerWrapper pW(64);
    pW.print();

    return 0;
}
