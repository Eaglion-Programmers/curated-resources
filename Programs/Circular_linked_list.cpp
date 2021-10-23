#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*Head; //global 

void create(int A[], int n)
{
    int i;
    struct Node *t;
    //creating the first node
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *h)
{
    do
     printf("%d", h->data);/* code */
    } while (h!=Head);
    printf("\n");   
}
void RDisplay()//recursive display of circular linked list
{
  static int flag=0;
  if(h!=head || flag==0)
  {
      flag=1;
      printf("%d",h->data);
      RDisplay(h->next);
  }
  flag=0;
}
int length(struct Node *p)
{
    int len=0;
    do
    {
       len++;
       p=p->next;
    } while (p!=Head);
    return len;
}
void Insert(struct Node *p,int index, int x)
{
    struct Node *t;
    //checking the validity of index
    if(index<0 || index>length(Head))
      return;
    
    if(index==0)//insertion before head node
    {
      t=(struct Node *)malloc(sizeof(struct Node))
      t->data=x;
      if(Head==NULL)//if there are no nodes present initially
      {
          Head=t;
          Head->next=Head;
      }
      else
      {
        while(p->next!=Head) p=p->next;
        p->next=t;
        t->next=Head;
        Head=t;
      }
    }
    else{
        for(int i=0;i<index-1;i++) p=p->next;
        t=(struct Node *)malloc(sizeof(struct Node))
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

int Delete(struct Node *p,int index)
{
    struct Node *q;
    if(index<0 || index>length(Head))
      return -1;
    if(index==1)
    {
        while(p->next!=Head)
        {
            p=p->next;
        }
        int x=Head->data;
        if(Head==t)
        {
            free(Head);
            Head=NULL;
        }
        else{
            p->next=Head->next;
            free(Head);
            Head=p->next;
        }
    } 
    else
    {
        for(i=0;i<index-2;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;//return the deleted value
}
int main()
{
    int A[]={1,3,4,5,6,7};
    create(A,6);
    Display(Head);
    RDisplay(Head);
    Insert(Head,2,10);
    Delete(Head,5);
    return 0;
}
