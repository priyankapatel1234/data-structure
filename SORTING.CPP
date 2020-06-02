#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>

  void main()
      {
	  void getdata(int[10],int);
	  void putdata(int[10],int);
	void bubble_sort(int a[],int);
	void bubble_sort_imp(int a[],int);
	void selection_sort(int a[],int);
	 void insertion_sort(int a[],int );
	int i,a[10],n,temp,pass,flag=1,choice;
	clrscr();
	printf("emter the value of n\n");
	scanf("%d",&n);
	getdata(a,n);
	putdata(a,n);
	while(1)
	{
	 printf("sorting of elements \n");
	 printf("------------------------------------\n");
	 printf("1.bubble sorting \n");
	 printf("2.impproved bubble sorting\n");
	 printf("3.selection sorting\n");
	 printf("4.insertion sorting\n");
	 printf("5.exit\n");
	 printf("-----------------------------------\n");

	 printf("enter your choice  \n");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:printf("bubble sort\n");
		  bubble_sort(a,n);
		  putdata(a,n);
	       printf("done");
	       break;
	  case 2:printf("improved bubble sort\n");

	       bubble_sort_imp( a,n);
	       putdata(a,n);
	       break;
	  case 3:printf("selection sort \n");

	       selection_sort( a,n);
	       putdata(a,n);
	       break;
	 case 4:printf("selection sort \n");

	       insertion_sort( a,n);
	       putdata(a,n);
	       break;
	  case 5:printf("exit");  //exit
		  exit(1);
	  default:exit(1);
	  }
	  }
	  }

	   void getdata(int x[10],int n)
	   {
	    int k;
	    printf("enter the value  for sorting\n");
	    for(k=0;k<n;k++)
	    {
	    scanf("%d",&x[k]);
	    }
	  }
	    void putdata(int x[10], int n)
	    {
	     int k;
	     for(k=0;k<n;k++)
	     {
	      printf("%d\t",x[k]);
	      }
	      printf("\n");
	      }

	void bubble_sort(int a[],int n)
	{
	 int pass,j,flag=1,temp;
	  for(pass=1;pass<=n-1;pass++)
	  {
	   for(j=0;j<n-pass;j++)
	   {
	    if(a[j]>a[j+1])
	    {
	     temp=a[j];
	     a[j]=a[j+1];
	     a[j+1]=temp;
	    }
	   }
	  }
	 }
     void bubble_sort_imp(int a[],int n)
     {
      int pass,i,j,flag=1,temp;
       for(pass=1;pass<=n-1 && flag;pass++)
       {
	flag=0;
	for(j=0;j<n-pass;j++)
	{
	 if(a[j]>a[j+1])
	 {
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	  flag=1;
	 }
	}
       }
      }

      void selection_sort(int a[],int n)
      {
       int pass,j,temp,min,count;
	for(pass=1;pass<=n-1;pass++)
	{
	 min=pass-1;
	 for(j=pass;j<n;j++)
	 {
	  if(a[j]<a[min])
	  {
	   min=j;
	   }
	   }
	   temp=a[min];
	   a[min]=a[pass-1];
	   a[pass-1]=temp;
	   }
	   }

    void  insertion_sort(int a[],int n)
	{
	 int i,j,key;
	 for(j=1;j<n;j++)
	 {
	  key=a[j];
	  i=j-1;
	  while(i>=0&&a[i]>key)
	  {
	  a[i+1]=a[i];
	  i=i-1;
	  }
	  a[i+1]=key;
	  }
	  }