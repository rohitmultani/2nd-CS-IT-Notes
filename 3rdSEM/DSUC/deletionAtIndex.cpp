#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

struct Node* deleteIndex(struct Node * head,int index)
{
    struct Node *p=head;
    struct Node *q=head->Next;
    for(int i=0;i!=index-i;i++){
        p=p->Next;
        q=q->Next;
    }
    p->Next=q->Next;
    free(q);
    return head;


}
 void linkedListTraversal(struct Node *ptr){
     while(ptr!=NULL)
     {
         printf("Element:%d\n",ptr->data);
         ptr=ptr->Next;
     }
       if(ptr==NULL){
         printf("underflow");
     }
 }


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *New;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    New =(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->Next=second;

    second->data=10;
    second->Next=third;

    third->data=14;
    third->Next=fourth;

    fourth->data=21;
    fourth->Next=NULL;

    New->data=21;
    New->Next=NULL;

    linkedListTraversal(head);
    head=deleteIndex(head,2);
    linkedListTraversal(head);  
    return 0 ;
}