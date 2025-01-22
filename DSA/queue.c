#include<stdio.h>
int a[10];
int size = 10;
int front = -1;
int rear = -1;
void enqueue() {
    if (rear == size - 1) {
        printf("Queue is overflow\n");
    } else {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);
        if (front == -1) front = 0;
        a[++rear] = data;
    }
}
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Underflow\n");
        return -1;
    } else {
        int poppedElement = a[front++];
        printf("\nThe deleted element is %d\n", poppedElement);
        if (front > rear) { // Reset front and rear if the queue is empty after deletion
            front = rear = -1;
        }
        return poppedElement;
    }
}
void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
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
                enqueue();
                break;
            case 2:
                dequeue();
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
