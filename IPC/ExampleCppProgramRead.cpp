#include "IPC.h"
#include <iostream>
int main(){
    std::cout << IPC::getInstance()->mem_read() << std::endl;
    return 0;
}