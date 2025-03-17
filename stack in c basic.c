#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top = -1, arr[SIZE];
void push();
void pop();
void show();
int main()
{
    int choice;
    while(1)
    {
        printf("\nPerform oparation on the stack:\n");
        printf("1.push\n2.pop\n3.show\n4.End\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
void push()
{
    int x;
    if(top == SIZE -1)
    {
        printf("Overerflow\n");
    }
    else
    {
        printf("Enter the element to be added:");
        scanf("%d",&x);
        top = top +1;
        arr[top] = x;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Popped the element: %d",arr[top]);
        top = top - 1;
    }
}
void show()
{
    if(top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Present Elements: ");
        for(int i=top; i>=0; --i)
        {
            printf("%d ",arr[i]);
        }
    }
}
