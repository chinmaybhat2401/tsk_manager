#include "manage_task.h"
int numTasks=0;
void addtask()
{
    if (numTasks >= MAX_TASKS)
    {
        printf("Task list is full!\n");
        return;
    }

    printf("Enter task description: ");
    scanf(" %s", task[numTasks].descriptions);
    printf("Enter priority (1-5): ");
    scanf("%d", &task[numTasks].priorities);
    task[numTasks].statuses = 0;
    numTasks++;
    printf("Task added successfully!\n");
}
