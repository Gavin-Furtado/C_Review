#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100  // Maximum number of tasks
#define MAX_NAME_LEN 50 // Maximum length of a task name

// Enum to represent task status
enum TaskStatus {
    TO_DO,        // 0
    IN_PROGRESS,  // 1
    DONE          // 2
};

// Structure to represent a task
struct Task {
    char name[MAX_NAME_LEN];
    enum TaskStatus status;
};

// Function to display task status
const char* getStatusName(enum TaskStatus status) {
    switch (status) {
        case TO_DO: return "To-Do 📝";
        case IN_PROGRESS: return "In Progress 🔄";
        case DONE: return "Done ✅";
        default: return "Unknown";
    }
}

int main() {
    struct Task tasks[MAX_TASKS]; // Array to store tasks
    int taskCount = 0;            // Track the number of tasks

    int choice;

    while (1) {
        // Menu
        printf("\n--- Task Tracker ---\n");
        printf("1. Add Task\n");
        printf("2. Update Task Status\n");
        printf("3. View Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                if (taskCount >= MAX_TASKS) {
                    printf("Task list is full! 😔\n");
                    break;
                }
                printf("Enter task name: ");
                getchar(); // Consume newline left by previous input
                fgets(tasks[taskCount].name, MAX_NAME_LEN, stdin);
                tasks[taskCount].name[strcspn(tasks[taskCount].name, "\n")] = '\0'; // Remove newline
                tasks[taskCount].status = TO_DO;
                taskCount++;
                printf("Task added successfully! 🎉\n");
                break;
            }
            case 2: {
                if (taskCount == 0) {
                    printf("No tasks to update! 🙃\n");
                    break;
                }
                printf("Enter task number to update (1-%d): ", taskCount);
                int taskIndex;
                scanf("%d", &taskIndex);
                if (taskIndex < 1 || taskIndex > taskCount) {
                    printf("Invalid task number! 🚫\n");
                    break;
                }
                printf("Choose new status:\n");
                printf("0. To-Do 📝\n");
                printf("1. In Progress 🔄\n");
                printf("2. Done ✅\n");
                int newStatus;
                scanf("%d", &newStatus);
                if (newStatus < TO_DO || newStatus > DONE) {
                    printf("Invalid status! 🚫\n");
                    break;
                }
                tasks[taskIndex - 1].status = (enum TaskStatus)newStatus;
                printf("Task status updated successfully! ✨\n");
                break;
            }
            case 3: {
                if (taskCount == 0) {
                    printf("No tasks to display! 📭\n");
                    break;
                }
                printf("\n--- Task List ---\n");
                for (int i = 0; i < taskCount; i++) {
                    printf("%d. %s [%s]\n", i + 1, tasks[i].name, getStatusName(tasks[i].status));
                }
                break;
            }
            case 4: {
                printf("Exiting Task Tracker. Goodbye! 👋\n");
                return 0;
            }
            default: {
                printf("Invalid choice! Please try again. 🤔\n");
            }
        }
    }
}
