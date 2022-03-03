#include<stdio.h>
#include<stdlib.h>

struct node
{
        int val;
        struct node*next;
};
 
struct node *head;
void push(int data)
{
       
        struct node *ptr=(struct node*)malloc(sizeof(struct node));        
        if(ptr==NULL)
        {
                printf("overflow");
        }
        else
        {
                if(head==NULL)
                {
                        ptr->val=data;
                        ptr->next=NULL;
                        head=ptr;
                }
                else
                {        
                        ptr->val=data;
                        ptr->next=head;
                        head=ptr;
                }
                printf("item pushed");
        }
}

void pop()
{
        int item;
        struct node *ptr;
        if(head==NULL)
        {
                printf("underflow");
        }
        else
        {
                item=head->val;
                ptr=head;
                head=head->next;
                free(ptr);
                printf("item poped");
        }
}
void display()
{
        int i;
        struct node *ptr;
        ptr=head;

        if(head==NULL)
        {
                printf("undrflow");
        }
        else
        {
                printf("elements\n");
               
                while(ptr!=NULL)
                {
                        printf("%d\n",ptr->val);
                        ptr=ptr->next;
                }
        }
}
void main()
{
        int c,x,i;
        printf("STACK OPERATIONS USING LINKEDLIST");
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        do
        {
                printf("ENTER YOUR CHOICE:");
                scanf("%d",&c);
                switch(c)
               
                {
                        case 1:
                                      {
                                printf("enter element:");
                                scanf("%d",&x);
                                push(x);        
                                break;
                                }
                        case 2:
                                {
                                pop();
                                break;
                                }
                        case 3:
                                {
                                display();
                                break;
                                }
                        case 4:
                                {
                                printf("exit point");
                                break;
                                }
                        default:
                                {
                                printf("enter valid choice(1/2/3/4)");
                                }

                }
        }while(c!=4);


}