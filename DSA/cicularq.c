#include <stdio.h>
#define SIZE 5

int a[SIZE];
int front = -1;
int rear = -1;

void enqueue() {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is overflow\n");
    } else {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        a[rear] = data;
    }
}

int dequeue() {
    if (front == -1) {
        printf("Queue is underflow\n");
        return -1;
    } else {
        int poppedElement = a[front];
        if (front == rear) {
            front = rear = -1;  // Reset the queue
        } else {
            front = (front + 1) % SIZE;
        }
        printf("\nThe deleted element is %d\n", poppedElement);
        return poppedElement;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        int i = front;
        while (1) {
            printf("%d ", a[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % SIZE;
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
