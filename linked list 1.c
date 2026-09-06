#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
// fun to travese the linked list
void linkedlisttraverse(struct node *ptr){
     while(ptr!=NULL)
    {
        printf("%d the elements : \n",ptr->data);
        ptr=ptr->next;
    }
}

// fun to delete the first element in list
struct node* deletefirst(struct node *head){
    struct node *ptr = head;
    head=head->next;
    free(ptr);
    return head;
}
//fun to delete the last element in list 
struct node* deletelast(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    p->next=NULL;
    free(q);
    return head;
}

//fun to delete element at a given index
struct node* deleteatindex(struct node *head,int index)
{
   struct node *p=head;
   struct node*q=head->next;
   for(int i=0;i<(index-1);i++)
   {
    p=p->next;
    q=q->next;
   }
   p->next=q->next;
   free(q);
   return head;
}
//fun to delete element with a given value
struct node* deleteatvalue(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;

}
int main()
{
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
struct node *fifth;
struct node *sixth;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
fifth=(struct node*)malloc(sizeof(struct node));
sixth=(struct node*)malloc(sizeof(struct node));


    head->data=7;

    head->next=second;
    second->data=11;
    second->next=third;
    third->data=19;
    third->next=fourth;
    fourth->data=20;
    fourth->next=fifth;
    fifth->data=25;
    fifth->next=sixth;
    sixth->data=30;
    sixth->next=NULL;

    //before deletion 
    linkedlisttraverse(head);
    //after deletion of first element

    head=deletefirst(head);
    printf("after deletion of first element \n");
    linkedlisttraverse(head);
    //after deletion of last element
    head=deletelast(head);
    printf("after deletion of last element \n");
    linkedlisttraverse(head);
    //after deltion at the index 3
    head=deleteatindex(head,3);
    printf("deleted at index 3 \n");
    linkedlisttraverse(head);
    //after deletion at the value 19
    head=deleteatvalue(head,19);
    printf("deletion at value 19\n");
    linkedlisttraverse(head);


    return 0;
}


