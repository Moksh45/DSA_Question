#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *p)
{
    if (p->f == p->r)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *p)
{
    if (p->r == p->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        printf("Enqued element: %d\n", value);
    }
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty");
    }
    else
    {
        q->f++;
        int a = q->arr[q->f];
        return a;
    }
}

int main()
{
    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // --> be can also use pointer like this way <--

    // struct queue *q;
    // q->size = 4;
    // q->f = q->r = 0;
    // q->arr = (int*) malloc(q->size*sizeof(int));

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);
    enqueue(&q, 10);

    // enqueue(&q, 45);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

    // if (isEmpty(&q))
    // {
    //     printf("Queue is empty\n");
    // }
    // if (isFull(&q))
    // {
    //     printf("Queue is full\n");
    // }

    return 0;
}
