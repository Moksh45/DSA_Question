#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack is OverFlow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Node *top, int position)
{
    struct Node *ptr = top;
    for (int i = 0; ((i < (position - 1)) && (ptr != NULL)); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
}

int stackTop(struct Node *ptr)
{
    return ptr->data;
}

int stackBottom(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 10);
    top = push(top, 210);
    top = push(top, 1120);
    top = push(top, 1230);
    top = push(top, 110);
    top = push(top, 140);
    linkedListTraversal(top);

    int element = pop(&top);
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);

    int element1 = peek(top, 3);
    printf("Element at position 3 is : %d\n\n", element1);

    printf("Element at top is : %d\n\n", stackTop(top));
    printf("Element at Bottom of The Stack is : %d", stackBottom(top));
    return 0;
}