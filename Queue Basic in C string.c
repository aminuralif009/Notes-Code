#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10  // Queue size

int front = -1, rear = -1;
char queue[SIZE][20];

void enqueue(char name[]);
void dequeue();
void show();

int main() {
    int choice;
    char name[20];

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Add Customer (Enqueue)\n");
        printf("2. Serve Customer (Dequeue)\n");
        printf("3. Show Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter customer name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                enqueue(name);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

void enqueue(char name[]) {
    if (rear == SIZE - 1) {
        printf("Queue is full!\n");
    } else {
        if (front == -1) front = 0;
        rear++;
        strcpy(queue[rear], name);
        printf("%s added to the queue.\n", name);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("%s has been served.\n", queue[front]);
        front++;
        if (front > rear) front = rear = -1;
    }
}

void show() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Current Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%s ", queue[i]);
        }
        printf("\n");
    }
}


