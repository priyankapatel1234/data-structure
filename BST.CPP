#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct binary_tree {
int data;
struct binary_tree *left;
struct binary_tree *right;
}bst;

void main()
      {
	void insert_node(bst ** ,int ) ;
	 void inorder(struct binary_tree *root);
	  void postorder(struct binary_tree *root);
	   void preorder(struct binary_tree *root);
	bst*   search(bst *root,int);

	 binary_tree *root,*loc ;

	root=NULL;
	int choice,item,data ;
	   clrscr();
	while(1)
	{
	 printf("Binary search tree \n");
	 printf("------------------------------------\n");
	 printf("1.insert anode into binary search tree.\n");
	 printf("2.inorder traversing \n");
	 printf("3.postorder transversing\n");
	 printf("4.preorder transversing\n");
	 printf("5.search element\n");
	 printf("6.exit\n");
	 printf("-----------------------------------\n");

	 printf("enter your choice  \n");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:printf("insert a node into binary search tree\n");

	       printf("enter an data\n");
	       scanf("%d",&item);
	       insert_node(&root,item);
	       printf("\ndone");
		break;
	   case 2:printf("inoder bst \n");
		  inorder(root);
		  printf("\ndone");
		  break;
	    case 3:printf("postorder in bst \n");
		   postorder(root);
		   printf("\ndone");
		   break;
	    case 4:printf("preorder in bst \n");
		  preorder(root);
		  printf("\ndone");
		  break;
	    case 5:printf("search element in bst \n");
		   printf("enter the search element u want to search\n");
		   scanf("%d",&data);
		    loc=search(root,data);
	       if(loc!=NULL)
	       printf("item found");
	       else
	       printf("item not found");


		   printf("\ndone");
		   break;

	 case 6:printf("exit");  //exit
		  exit(1);
	  default:exit(1);
	  }
	  }
	  }


void insert_node(bst **root,int data)
{
 bst *tmp,*newn,*fpp;
 if(data==-999)
 return;
 newn=(bst*)malloc(sizeof(bst));
 newn->data=data;
 newn->left=(bst*)NULL;
 newn->right=(bst*)NULL;
 if(*root==NULL){
 *root=newn;
 return;
 }

 tmp=*root;
 while(tmp!=NULL)
 {
 fpp=tmp;
 if(data<tmp->data)
 tmp=tmp->left;
 else
 tmp=tmp->right;
 }

 if(data<fpp->data)
 fpp->left=newn;
 else
 fpp->right=newn;
 }

  void inorder(struct binary_tree *root)
  {
   if(root!=NULL)
   {
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
    }
    }
    void postorder(struct binary_tree *root)
  {
   if(root!=NULL)
   {
    inorder(root->left);

    inorder(root->right);
    printf("%d->",root->data);
    }
    }

    void preorder(struct binary_tree *root)
  {
   if(root!=NULL)
   {

    printf("%d->",root->data);
    inorder(root->left);
    inorder(root->right);
    }
    }

    bst*  search(bst *root, int data)
    {
      bst *loc;
     loc=root;
    while(root!=NULL)
    {
     if(data==root->data)
      return root;
      if(data<root->data)
      root=root->left;
      else
      root=root->right;
     }
     return NULL;
     }