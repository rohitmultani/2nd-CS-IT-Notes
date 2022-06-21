#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

 void linkedListTraversal(struct Node *ptr){
     while(ptr!=NULL)
     {
         printf("Element:%d\n",ptr->data);
         ptr=ptr->Next;
     }
 }

    struct Node *insertAtIndex(struct Node *head,int data, int index)
    {
        struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
        struct Node *p=head;
        int i=0;
        while(i!=index-1)
        {
            p=p->Next;
            i++;
        }
        ptr->data=data;
        ptr->Next=p->Next;
        p->Next=ptr;

        return head;
    }

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));


    head->data=7;
    head->Next=second;

    second->data=10;
    second->Next=third;

    third->data=14;
    third->Next=fourth;

    fourth->data=21;
    fourth->Next=NULL;

    linkedListTraversal(head);
    head=insertAtIndex(head,88,2);
    return 0 ;
}