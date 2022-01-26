#include "IPC.h"

int main(){
    IPC::getInstance()->mem_write("Hello from C++");
    return 0;
}