#include <stdio.h>
#include <stdlib.h>
#include "icon_ossp.h"

void monitor_demo()
{
    int result;

    printf("\nRunning file demo using strace\n");

    result = system("printf '1\\n0\\n' | strace -o logs/trace.txt -e trace=openat,read,write,close ./icon_ossp > logs/monitor_output.txt 2>&1");

    if (result == 0)
    {
        printf("Strace completed\n");
        printf("Trace saved in logs/trace.txt\n");
    }
    else
    {
        printf("Strace failed\n");
    }
}
