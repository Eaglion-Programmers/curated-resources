#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL; //creating a global pointer

void create(int A[],int n)//Creating a linked list
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
       t=(struct Node *)malloc(sizeof(struct Node));
       t->data=A[i];
       t->next=NULL;
       last->next=t; 
       last=t;
    }
    
}
void create2(int A[],int n)//creating second ll
{
    int i;
    struct Node *t,*last;
    second=(struct Node*)malloc(sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++)
    {
       t=(struct Node *)malloc(sizeof(struct Node));
       t->data=A[i];
       t->next=NULL;
       last->next=t; 
       last=t;
    }
    
}
void display(struct Node*p)//displaying the linked list
{
  while(p!=NULL)
  {
      printf("%d",p->data);
      p=p->next;
  }
}
void RDisplay(struct Node *p)//displaying using recursive function
{
  if(p!=NULL)
  {
      //printf("%d", p->data," ");
      RDisplay(p->next);
      printf("%d", p->data," ");
  }
}

int count(struct Node *p)//counting the number of nodes
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p)
{
    if (p!=NULL)
    {
        return Rcount(p->next)+1;
    }
    else 
      return 0;
}
int sum(struct Node *p)//sum of all the values in a linked list
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}
int Rsum( struct Node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else 
     return Rsum(p->next)+p->data;
}
int Max(struct Node *p){//finding the maximum element in a linked list
    int max=INT32_MIN;//built in constant
    while(p)
    {
        if(p->data>max)
        {
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
int Rmax(struct Node *p)
{
    int x=0;
    if(p==0)
        return INT32_MIN;
    x=Rmax(p->next);
    if(x>p->data)
      return x;
    else return p->data;      
}
struct Node *LSearch(struct Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
          return p;
        p=p->next;  
    }
    return NULL;
}
struct Node *RSearch(struct Node *p,int key)
{
    if(p==NULL)
       return NULL;
    if(key==p->data)
       return p;
    return RSearch(p->next,key);     
}
void insert(struct Node *p,int index, int x)
{
    struct Node *t; //creating a new node
    if(index<0||index>count(p))//invalid cases
       return;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)//inserting at the first position
    {
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void SortedInsert(struct Node *p,int x)//the key to be inserted
{
  struct Node *t,*q=NULL;
  t=(struct Node*)malloc(sizeof(struct Node));
  t->data=x;
  t->next=NULL;//initialising the new pointer
  if(first==NULL)//if the linked list is already empty
     first=t;
  else
  {
    while(p && p->data<x)
    {
        q=p;
        p=p->next;
    }
    if(p==first)//if the element to be inserted is the smallest
    {
        t->next=first;
        first=t;
    }
    else//inserting an element in between the list
    {
        t->next=q->next;
        q->next=t;
    }
  }

int Delete(struct Node *p,int index)
{
    struct Node *q=NULL;
    int x=-1;

    if(index<1 || index>count(p))//invalid case
      return -1;
    if (index==1)//deleting the first element
    {
      q=first;
      x=first->data;
      first=first->next;
      free (q);
      return x;
    }  
    else 
    {
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free (p);
        return p;
    }
}

int isSorted(struct Node *p)
{
    int x=-65536;
    while(p!=NULL)
    {
        if(p->data<x)//initial assumption is that the list is sorted.
          return 0;//false
        x=p->data;
        p=p->next;  
    }
    return 1;//list is sorted
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q=p->next;//p is a tail pointer for q
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else//if a duplicate element is found
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}
void Reverse1(struct Node *p)
{
    int *A,i=0;
    struct Node *q;
    A=(int *)malloc(sizeof(int)*count(p));
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}
void Reverse2(struct Node *p)
{
  struct Node *q=NULL, *r=NULL;
  while(p!=NULL)
  {
      r=q;
      q=p;
      p=p->next;
      q->next=r;
  }
  first=q;
}
void Reverse3(struct Node *q,struct Node *p)
{
    if(p)
    {
        Reverse3(p,p->next);
        p->next=q;
    }
    else 
    {
        first=q;
    }
}
void Concat(struct Node *p, struct Node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}
void Merge(struct Node *p,struct Node *q)
{
    struct Node *last;
    if(p->data < q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else 
    {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
       if(p->data < q->data)
      {
        last->next=p;
        last=p;
        p=p->next;
        last->next=NULL;
       }
       else
       {
          last->next=q;
          last=q;
          q=q->next;
          last->next=NULL;  
       }
       if(p)=last->next=p;
       if(q)=last->next=q;
}
int main()
{   
    struct Node *temp;
    int A[]={3,5,7,10,15,34,56,78};
    create(A,8);
    display(first);
    RDisplay(first);
    printf("Length is %d", Rcount(first));
    cout<<"Sum is "<<Rsum(first);
    cout<<Rmax(first);
    temp=RSearch(first,25);
    if(temp)
       cout<<"Key is found"<<temp->data;
    else
       cout<<"Key is not found"<<endl;
    insert(first,0,10);
    display(first);
    return 0;
}
