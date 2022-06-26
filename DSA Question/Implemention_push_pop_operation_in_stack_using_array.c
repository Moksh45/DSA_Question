#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *p)
{
    if (p->size - 1 == p->top)
    {
        return 1;
    }
    return 0;
}

int push(struct stack *p, int val)
{
    if (isFull(p))
    {
        printf("Stack overFlow Cannot Push %d to the Stack\n", val);
    }
    else
    {
        p->top++;
        p->arr[p->top] = val;
    }
}

int pop(struct stack *p)
{
    if (isEmpty(p))
    {
        printf("Stack UnderFlow Cannot pop from the Stack\n");
    }
    else
    {
        int val = p->arr[p->top];
        p->top--;
        return val;
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    push(s, 70);
    push(s, 80);
    push(s, 90);
    push(s, 100);
    push(s, 110);
    push(s, 120);
    push(s, 130);
    printf("\n\n");
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!

    return 0;
}