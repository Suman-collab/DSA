#include <stdio.h>
int a[10];
int size = 10;
int top = -1; // Initialize top to -1 to represent an empty stack
void insert() {
    if (top == size - 1) {
        printf("Stack is overflow\n");
    } else {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);
        a[++top] = data;
    }
}
int pop() {
    if (top == -1) {
        printf("Stack is Underflow\n");
        return -1; // Return a flag value for underflow
    } else {
        int poppedElement = a[top--];
        printf("\nThe popped element is %d\n", poppedElement);
        return poppedElement;
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = 0; i <= top; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
int main() {
    while (1) {
        printf("1.insert\n2.pop\n3.display\n4.exit\n");
        int choice;
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}
