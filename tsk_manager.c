#include <stdio.h>

#define MAX_TASKS 100

char descriptions[MAX_TASKS][100];
int priorities[MAX_TASKS];
int statuses[MAX_TASKS];
int numTasks = 0;

void displayMenu();
void addTask();
void viewTasks();
void markTaskComplete();


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
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskComplete();
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

void displayMenu()
{
    printf("\nMenu:\n");
    printf("1. Add Task\n");
    printf("2. View Tasks\n");
    printf("3. Mark Task as Complete\n");
    printf("4. Exit\n");
}

void addTask()
{
    if (numTasks >= MAX_TASKS)
    {
        printf("Task list is full!\n");
        return;
    }

    printf("Enter task description: ");
    scanf(" %s", descriptions[numTasks]);
    printf("Enter priority (1-5): ");
    scanf("%d", &priorities[numTasks]);
    statuses[numTasks] = 0; // Set status as incomplete
    numTasks++;
    printf("Task added successfully!\n");
}

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
        printf("%d.\t%d\t\t%s\t%s\n", i + 1, priorities[i],
               statuses[i] == 0 ? "Incomplete" : "Complete",
               descriptions[i]);
    }
    printf("\n");
}

void markTaskComplete()
{
    int taskIndex;
    printf("Enter the task number to mark as complete: ");
    scanf("%d", &taskIndex);
    if (taskIndex < 1 || taskIndex > numTasks)
    {
        printf("Invalid task number!\n");
        return;
    }
    statuses[taskIndex - 1] = 1;
    printf("Task marked as complete!\n");
}




