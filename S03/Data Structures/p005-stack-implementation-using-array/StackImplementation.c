#include <stdio.h>
#define MAX 7
int Stack[MAX], top = -1;
void push(int data) {
    if (top == MAX-1) {
        printf("Stack Overflow!");
    } else {
        Stack[++top] = data;
    }
}
void pop() {
    int d;
    if (top == -1) {
        printf("Stack Underflow!");
    } else {
        d = Stack[top--];
        printf("%d", d);
    }
}
void display() {
    for (int i=top; i>=0; i--) {
        printf("%d ", Stack[i]);
    }
}
void main()
{
    int choice, data;
    do
    {
        printf("\n\nMenu: \n");
        printf("1. Add an element\n");
        printf("2. Delete an element\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Push Element: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            printf("Pop Element: ");
            pop();
            break;
        case 3:
            printf("Stack: ");
            display();
            break;
        case 4:
            printf("Exiting...");
            break;
        default:
            printf("Something went wrong! Try Again.");
            break;
        }
    } while (choice != 4);
}