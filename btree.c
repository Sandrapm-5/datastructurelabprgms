#include<stdio.h>
#include<stdlib.h>
struct node* insert(struct node*,int);
struct node*inorder(struct node*);
struct node*preorder(struct node*);
struct node*postorder(struct node*);

struct node
{
    int info;
    struct node *left,*right;
};

struct node* create(int data)
{
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct node* inorder(struct node* ptr)
    {
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d \n",ptr->info);
        inorder(ptr->right);
    }
    }

        struct node*preorder(struct node* ptr)
        {


        if(ptr!=NULL)
        {

        printf("%d \n",ptr->info);

        preorder(ptr->left);
        preorder(ptr->right);
        }
    }


    struct node*postorder(struct node* ptr)
    {

        if(ptr!=NULL)
        {
        postorder(ptr->left);
       postorder (ptr->right);
        printf("%d \n",ptr->info);

        }
    }


    void main(){


        struct node* root=NULL;
        struct node *temp,*newnode,*ptr;
        int c,elem,i,p,flag=0;
        int ch;
        while(1)
        {
        printf("\nBinary search tree\n1.creation\n2.inorder\n3.preorder\n4.postorder\n5.exit\nenteryou choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("enter the element to be inserted:");
                scanf("%d",& elem);
                if(root==NULL)
                    root= insert(root,elem);
                else
                    insert(root, elem);
                break;
                /*}
                    while((ptr!=NULL)&&(flag==0));
                    {
                        if(elem<ptr->info)
                        {
                            temp=ptr;
                            ptr=ptr->left;
                        }
                        else if(elem>ptr->info)
                        {
                            temp=ptr;
                        }
                    }
            break;*/
            case 2:{inorder(root);
            break;}
            case 3:{preorder(root);
            break;}
            case 4:{postorder(root);
            break;}
            case 5:{exit(0);
            break;}

                        }
                    }
              }
            }

struct node *insert(struct node* item, int val)
{
    struct node *newnode;
        newnode=create(val);
                if(item==NULL)
                {
                    return newnode;
                }
                else
                {
                    if(val < item->info){
                        item->left=insert(item->left,val);
                    }
                    else if(val > item->info){
                        item->right=insert(item->right,val);
                    }
                    return item;
                }
}



