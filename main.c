#include "manage_task.h"

int main()
{
    int choice;

    while (1)
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addtask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                marktaskcomplete();
                break;
            case 4:
                printf("Exiting task manager...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
