#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node node;
struct  node*head;

     void push()
     {
         int data;
        struct node*temp;
         printf("\n enter value to be insert");
         scanf("%d",&data);
         temp=(struct node*)malloc(sizeof(struct node));
         temp->data=data;

         if(head==NULL)
         {
             head=temp;
             head->next=NULL;
         }
         else
            {
                temp->next=head;
                head=temp;
            }

         }
void pop()
    {
      struct node*temp;
      if(head==NULL)
      {
        printf("list is empty");

      }
      else
      {
        temp=head;
        head=head->next;
        free(temp);
      }
    }
    void search()
    {
        int  data,value,found=0;
         printf("value to be search:");
       scanf("%d",&value);


        struct node*temp=head;

      while(temp!=NULL)
      {
          if(temp->data==value)
          {
              printf("%d is found ",value);
              found=1;
              break;
          }
          if(found==0)
          {
              printf("not found");
          }
      }




     }


void display()
    {
            struct node*temp;
             int count=1;
             temp=head;
             while(temp->next!=NULL)
             {
                 printf("\n list[%d]:%d\n",count,temp->data);
                 temp=temp->next;
                 count++;
             }
             printf("list[%d]:%d\n",count,temp->data);

     }
     int main()
    {



     while(1)
     {


     int choice;
     printf("\n 1. push \n 2.pop \n 3.search \n 4.display \n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:push();
         break;
         case 2:pop();
         break;
         case 3:search();
         break;
         case 4:display();
         break;
        case 5:exit(0);
        break;

         }
     }

}
