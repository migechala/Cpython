#include "IPC.h"
IPC* IPC::instance = nullptr;

IPC::IPC(){
    mkfifo(fifo, 0666);
}

IPC* IPC::getInstance(){
    if(instance==nullptr){
        instance = new IPC();
    }
    return instance;
}

int IPC::mem_write(std::string str){
    file = open(fifo, O_WRONLY);
    write(file, str.c_str(), strlen(str.c_str())+1);
    close(file);
}

std::string IPC::mem_read(){
    file = open(fifo, O_RDONLY);
    read(file, input, sizeof(input)/sizeof(char));
    close(file);
    return input;
}