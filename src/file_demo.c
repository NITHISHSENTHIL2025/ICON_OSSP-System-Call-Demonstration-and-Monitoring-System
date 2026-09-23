#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "icon_ossp.h"

void file_demo()
{
    int fd;
    char text[] = "ICON OSSP file system call demo\n";
    char buffer[100];

    fd = open("data/sample.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (fd == -1)
    {
        perror("open");
        return;
    }

    printf("\nFile created successfully\n");

    write(fd, text, strlen(text));

    printf("Data written successfully\n");

    close(fd);

    fd = open("data/sample.txt", O_RDONLY);

    if (fd == -1)
    {
        perror("open");
        return;
    }

    int bytes = read(fd, buffer, sizeof(buffer) - 1);

    if (bytes == -1)
    {
        perror("read");
        close(fd);
        return;
    }

    buffer[bytes] = '\0';

    printf("Data read from file: %s", buffer);

    close(fd);

    printf("File closed successfully\n");
}
