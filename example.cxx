
#include <iostream>
#include "config.h"

#ifdef USE_MYLIB
#include "mylib.h"
#endif

int main()
{
    std::cout << "Running example " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;
#ifdef USE_MYLIB
    MyLib::print("Using mylib!");
#endif
    return 0;
}
