#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int file;

    char * fifo = "/tmp/fifo";

    mkfifo(fifo, 0666);

    char input[80], output[80];
    while (1)
    {
        file = open(fifo, O_RDONLY);
        read(file, input, 80);

        printf("Writer: %s\n", input);
        close(file);

        file = open(fifo,O_WRONLY);
        fgets(output, 80, stdin);
        write(file, output, strlen(output)+1);
        close(file);
    }
    return 0;
}