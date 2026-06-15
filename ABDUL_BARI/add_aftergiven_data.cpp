#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *first, *temp, *ttemp, *pre, *curr, *nextt ,*p;

void init()
{
    first = temp = ttemp = NULL;
}
void createfirst(int x)
{
    first = new node;
    first->data = x;
    first->next = NULL;
}

void addNode(int val)
{
    temp = first;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = NULL;
    temp->next = ttemp;
}

void display()
{
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void add_aftergiven_data(int x,int y)
{
    temp=first;
    while(temp->data!=x)
    {
        temp=temp->next;
    }
    ttemp=temp->next;
    p=new node;
    p->data=y;
    p->next=ttemp;
    temp->next=p;
}
int main()
{
    init();
    createfirst(10);
    addNode(20);
    addNode(30);
    cout<<"befor adding: "<<endl;
    display();
    // add_beforegiven_data(20,45);
    add_aftergiven_data(20,60);
    cout<<"after adding: "<<endl;
    display();
}