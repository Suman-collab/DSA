#include <stdio.h>
#include <stdlib.h>
// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};
// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the end of the list
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}
// Function to delete a node with a given key
struct Node* deleteNode(struct Node* head, int key) {
    struct Node* temp = head;
    struct Node* prev = NULL;
    // If the head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        head = temp->next; // Changed head
        free(temp);        // Free old head
        return head;
    }
    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    // If the key was not present in the list
    if (temp == NULL) {
        printf("Key not found\n");
        return head;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);

    return head;
}
// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    int choice, data, key;

    while (1) {
        printf("Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insert(head, data);
                break;
            case 2:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                head = deleteNode(head, key);
                break;
            case 3:
                display(head);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}