/*
 // Sample code to perform I/O:
 
 scanf("%s", name);              // Reading input from STDIN
 printf("Hi, %s.\n", name);      // Writing output to STDOUT
 
 // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 */

// Write your code here
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(sizeof(int)*stack->capacity);
    return stack;
}

int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity-1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack, int item)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

int pop(struct Stack* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    
    return stack->array[stack->top--];
}

int main()
{
    int t, n, id, previnpt = 0, temp = 0;
    char input;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf(" %d%d", &n, &id);
        struct Stack* stack = createStack(n+1);
        push(stack, id);
        for(int j=0;j<n;j++)
        {
            scanf(" %c", &input);
            if(input=='P')
            {
                scanf("%d", &id);
                push(stack, id);
                previnpt = 0;
            }
            else if(input=='B')
            {
                if(previnpt==1)
                {
                    push(stack, temp);
                    previnpt = 0;
                }
                else
                {
                    temp = pop(stack);
                    previnpt = 1;
                }
            }
        }
        printf("Player %d", stack->array[stack->top]);
    }
}

