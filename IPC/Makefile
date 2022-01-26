# read: ipc_library
# 	cc ExampleCppProgramRead.cpp -o IPC_EXAMPLE_READER
# write.o: ipc_library ExampleCppProgramWrite.cpp
# 	$(CC) $(CFLAGS) ExampleCppProgramWrite.cpp -o IPC_EXAMPLE_WRITER
CC = g++
CFLAGS = -Wall
READ_PROG = read
READ_OBJS = ipc_library.o read.o

WRITE_PROG = write
WRITE_OBJS = ipc_library.o write.o


ipc_library.o: IPC.cpp
	$(CC) -c $(CFLAGS) IPC.cpp  -o $@
write.o:ExampleCppProgramWrite.cpp
	$(CC) -c $(CFLAGS) ExampleCppProgramWrite.cpp -o $@
read.o: ExampleCppProgramRead.cpp
	$(CC) -c $(CFLAGS) ExampleCppProgramRead.cpp  -o $@
$(READ_PROG): $(READ_OBJS)
	$(CC) $(CFLAGS) $(READ_OBJS) -o $@

$(WRITE_PROG): $(WRITE_OBJS)
	$(CC) $(CFLAGS) $(WRITE_OBJS) -o $@

all: $(WRITE_PROG) $(READ_PROG)
	echo "Run in 2 separate terminals\n"
clean:
	rm -f *~ *.o $(READ_PROG) $(WRITE_PROG) core a.out