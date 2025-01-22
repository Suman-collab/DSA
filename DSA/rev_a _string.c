#include <stdio.h>
#include <string.h>

void insert(char stack[], char i, int *top, int size) {
    if (*top == size - 1) {
        printf("Stack overflow. Cannot insert '%c'\n", i);
        return;
    }
    (*top)++;
    stack[*top] = i;
}

void display(char stack[], int top) {
    printf("Reversed String: ");
    for (int i = top; i >= 0; i--) {
        printf("%c", stack[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character if present

    int size = strlen(str);
    char stack[size];
    int top = -1;

    // Push characters onto the stack
    for (int i = 0; i < size; i++) {
        insert(stack, str[i], &top, size);
    }

    // Display the stack (reversed string)
    display(stack, top);

    return 0;
}
