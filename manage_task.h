#ifndef MANAGE_TASK_H_
#define MANAGE_TASK_H_

#include <stdio.h>
#define MAX_TASKS 100

void displayMenu();
void addtask();
void viewTasks();
void marktaskcomplete();

struct Tasks
{
    char descriptions[100];
    int priorities;
    int statuses;
    int suggested_order;
};
struct Tasks task[MAX_TASKS];
extern int numTasks;




#endif
