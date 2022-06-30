#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
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

int push(struct stack *p, char val)
{

    p->top++;
    p->arr[p->top] = val;
}

int pop(struct stack *p)
{

    char val = p->arr[p->top];
    p->top--;
    return val;
}

int isParenthesis(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char *exp = "((((_))))))()())()()())(";
    if (isParenthesis(exp))
    {
        printf("Parenthesis Match");
    }
    else
    {
        printf("Parenthesis Not match");
    }

    return 0;
}
