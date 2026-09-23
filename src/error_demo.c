#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "icon_ossp.h"

void error_demo()
{
    int fd;

    printf("\nError handling demo\n");

    fd = open("data/file_not_found.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("open returned: %d\n", fd);
        printf("errno: %d\n", errno);
        printf("Error: %s\n", strerror(errno));
    }
    else
    {
        close(fd);
    }
}

