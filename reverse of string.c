#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Stack structure
typedef struct Stack {
    char arr[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack* s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack* s, char c) {
    if (!isFull(s)) {
        s->arr[++(s->top)] = c;
    }
}

// Function to pop an element from the stack
char pop(Stack* s) {
    if (!isEmpty(s)) {
        return s->arr[(s->top)--];
    }
    return '\0'; // Return null character if stack is empty
}

// Function to reverse a string using a stack
void reverseString(const char* str, char* reversed) {
    Stack stack;
    initStack(&stack);

    // Push all characters onto the stack
    for (int i = 0; i < strlen(str); i++) {
        push(&stack, str[i]);
    }

    // Pop characters from the stack to get the reversed string
    for (int i = 0; i < strlen(str); i++) {
        reversed[i] = pop(&stack);
    }
    reversed[strlen(str)] = '\0'; // Null-terminate the reversed string
}

int main() {
    const char* original = "Hello, World!";
    char reversed[MAX];

    reverseString(original, reversed);
    printf("Original: %s\n", original);
    printf("Reversed: %s\n", reversed);

    return 0;
}
