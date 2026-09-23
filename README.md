# ICON_OSSP

System Call Demonstration and Monitoring System

Course: Operating Systems and Systems Programming

Section: 7

Team: 13

## Team Members

2520030346 - NITHISH S

2520030328 - Sai Sathwik

2520030532 - Vivek

## About Project

ICON_OSSP is a Linux system programming project developed using C.

The project demonstrates important Linux system calls and shows how user programs interact with the Linux operating system.

## Features

- File system calls using open(), read(), write() and close()
- Process creation using fork()
- Program execution using exec()
- Parent child synchronization using wait() and waitpid()
- Error handling using errno and strerror()
- System call monitoring using strace

## Tools Used

- Ubuntu Linux
- C
- GCC
- Make
- strace
- Valgrind
- GDB
- AddressSanitizer

## Project Structure

src - C source files

include - Header file

tests - Test script

logs - Test and system call trace results

data - File system call demo data

docs - Project documents

## Build

make

## Run

./icon_ossp

## Menu

1. File system calls
2. Process creation
3. Program execution
4. Parent child synchronization
5. Error handling
6. System call monitoring
7. Run all
0. Exit

## Testing

./tests/run_tests.sh

## Strace

strace ./icon_ossp

## Valgrind

valgrind --leak-check=full --show-leak-kinds=all ./icon_ossp

## AddressSanitizer

gcc -g -fsanitize=address -Iinclude src/main.c src/file_demo.c src/process_demo.c src/error_demo.c src/monitor.c -o icon_ossp_asan

./icon_ossp_asan

## Individual Contribution

NITHISH S - Process and execution module using fork(), exec(), wait(), waitpid(), integration and process testing

Sai Sathwik - File system and error handling module using open(), read(), write(), close(), errno and strerror()

Vivek - System call monitoring using strace, result logging, documentation and integration support
