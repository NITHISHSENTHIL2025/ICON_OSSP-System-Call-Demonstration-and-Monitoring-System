#!/bin/bash

mkdir -p logs

printf "1\n0\n" | ./icon_ossp > logs/file_test.txt

printf "2\n0\n" | ./icon_ossp > logs/process_test.txt

printf "3\n0\n" | ./icon_ossp > logs/exec_test.txt

printf "4\n0\n" | ./icon_ossp > logs/wait_test.txt

printf "5\n0\n" | ./icon_ossp > logs/error_test.txt

echo "All tests completed"
