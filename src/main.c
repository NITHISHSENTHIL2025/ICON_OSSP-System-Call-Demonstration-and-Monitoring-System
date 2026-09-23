#include <stdio.h>
#include "icon_ossp.h"

int main()
{
    int choice;

    while (1)
    {
        printf("\nICON OSSP\n");
        printf("1. File system calls\n");
        printf("2. Process creation\n");
        printf("3. Program execution\n");
        printf("4. Parent child synchronization\n");
        printf("5. Error handling\n");
        printf("6. System call monitoring\n");
        printf("7. Run all\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            file_demo();
        }
        else if (choice == 2)
        {
            process_demo();
        }
        else if (choice == 3)
        {
            exec_demo();
        }
        else if (choice == 4)
        {
            wait_demo();
        }
        else if (choice == 5)
        {
            error_demo();
        }
        else if (choice == 6)
        {
            monitor_demo();
        }
        else if (choice == 7)
        {
            file_demo();
            process_demo();
            exec_demo();
            wait_demo();
            error_demo();
            monitor_demo();
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
