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
        return 0;
    }
    int isFull(struct stack *ptr)
    {
        if (ptr->top == ptr->size - 1)
        {
            return 1;
        }
        return 0;
    }
    void push(struct stack *ptr,int val){
        if (isFull(ptr))
        {
            printf("The stack is Full\n");
        }
        else{
            ptr->top++;
            ptr->arr[ptr->top]=val;
        }
    }
    int pop(struct stack *ptr){
        if (isEmpty(ptr))
        {
            printf("The stack is empty");
        }
        else{
            int val;
            val=ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }

    int peek(struct stack* sp,int i)
    {
        int arrayInd=sp->top-i+1;
        if(arrayInd<0){
            printf("invalid\n")
            return -1;
        }
        else{
            return sp->arr[arrayInd];
        }
    }
    void show(struct stack *ptr)
    {
        while(ptr->top!=-1)
        {
        
        
            printf("element : %d\n",ptr->arr[ptr->top]);
            ptr->top--;

        }
    }
    int main()
    {
        struct stack *s=(struct stack *)malloc(sizeof(struct stack)); //pointer
        s->size = 4;
        s->top = -1;
        s->arr = (int *)malloc(s->size * sizeof(int));

        push(s,28);
    push(s,1);
    push(s,21);
    push(s,33);
    for(int j=1;j<=s->top+1;j++)
    {
    printf("The value at position %d is %d",i,peek(s,i))
    }
    show(s);

    }