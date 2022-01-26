#!/bin/bash

cd IPC
make
./IPC_EXAMPLE_WRITER && disown
./IPC_EXAMPLE_READER