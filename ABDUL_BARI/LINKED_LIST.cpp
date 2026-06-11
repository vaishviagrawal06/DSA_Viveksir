#include<stdio.h>
#include<iostream>
using namespace std;


//self referential pointer
struct Node
{
    int data;
    struct Node *next;
}*first;   //first is a global pointer which can be directly access

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    // first=(struct Node *)malloc(sizeof(struct Node))  //in C
    first=new Node;   //in C++

    first->data=A[0];
    first->next=NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t; 
    }
}


void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int A[]={3,5,7,10,15};

    create(A,5);

    display(first);
    return 0;
}