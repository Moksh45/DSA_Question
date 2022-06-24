#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // we use this also

    // struct stack s;
    // s.size=6;
    // s.top=-1;
    // s.arr=(int*)malloc(s.size*sizeof(int));

    // we use this also ->> we use this reference because for save memory

    struct stack *s;
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0]=10;
    s->top++;


    // Check if stack is empty
    if(isEmpty(s)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }

}