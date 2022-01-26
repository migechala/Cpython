#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <unistd.h>

class IPC{
    IPC();
private:
    static IPC* instance;
    static bool isFifo();

    int file;
    char* fifo = "/tmp/fifo";
    char input[80];
public:
    static IPC* getInstance();
public:
    std::string mem_read();
    int mem_write(std::string str);
};