#include "manage_task.h"

void viewTasks()
{
    if (numTasks == 0)
    {
        printf("No tasks available!\n");
        return;
    }

    printf("\nTasks:\n");
    printf("\n");
    printf("No.\tPriority\tStatus\t\tDescription\n");
    printf("\n");
    for (int i = 0; i < numTasks; i++)
    {
        printf("%d.\t%d\t\t%s\t%s\n", i + 1, task[i].priorities,
               task[i].statuses == 0 ? "Incomplete" : "Complete",
               task[i].descriptions);
    }
    printf("\n");
}
