#include "IPC.h"

int main(){
    IPC::getInstance()->mem_write("Hello world");
    return 0;
}