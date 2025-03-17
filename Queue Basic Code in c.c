#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int front = -1, rear = -1, arr[SIZE];

void enqueue();
void dequeue();
void show();

int main()
{
    int choice;
    while(1)
    {
        printf("\nPerform operation on the Queue:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Show\n4.End\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            enqueue();
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
            printf("Invalid choice\n");
        }
    }
}
void enqueue()
{
    int x;
    if(rear == SIZE - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        printf("Enter the element to be added: ");
        scanf("%d", &x);
        rear = rear + 1;
        arr[rear] = x;
    }
}


void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Dequeued the element: %d\n", arr[front]);
        front = front + 1;
    }
}


void show()
{
    if(front == -1 || front > rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Present Elements: ");
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

