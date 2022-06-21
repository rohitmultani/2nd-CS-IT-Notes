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
    return 0 ;
}