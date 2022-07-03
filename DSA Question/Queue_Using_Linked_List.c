#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *f = NULL;
struct Node *r = NULL;

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enQueue(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int deQueue()
{
    int value = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        value = ptr->data;
        free(ptr);
    }
    return value;
}

int main()

{
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", deQueue());
    enQueue(34);
    enQueue(4);
    enQueue(7);
    enQueue(17);
    enQueue(100);
    printf("Dequeuing element %d\n", deQueue());
    printf("Dequeuing element %d\n", deQueue());
    printf("Dequeuing element %d\n", deQueue());
    printf("Dequeuing element %d\n", deQueue());
    linkedListTraversal(f);
    return 0;
}