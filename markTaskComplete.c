#include "manage_task.h"

void marktaskcomplete()
{
    int taskIndex;
    printf("Enter the task number to mark as complete: ");
    scanf("%d", &taskIndex);
    if (taskIndex < 1 || taskIndex > numTasks)
    {
        printf("Invalid task number!\n");
        return;
    }
    task[taskIndex - 1].statuses = 1;
    printf("Task marked as complete!\n");
}
