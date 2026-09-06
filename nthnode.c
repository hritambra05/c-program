#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* deletenthnode(struct node *head,int n)
{
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<(n-1);i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
void linkedlisttraverse(struct node *ptr){
     while(ptr!=NULL)
    {
        printf("%d the elements : \n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{int n;

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=19;
    third->next=fourth;
    fourth->data=20;
    fourth->next=fifth;
    fifth->data=25;
    fifth->next=NULL;

    printf("enter the node you want to delete \n");
    scanf("%d",&n);
    deletenthnode(head,n);
    linkedlisttraverse(head);

}

    