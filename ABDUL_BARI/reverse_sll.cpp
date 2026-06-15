#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *first, *temp, *ttemp, *pre, *curr, *nextt;

void init()
{
    first = NULL;
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

void reverse()
{
    pre=NULL;
    curr=first;
    nextt=NULL;

    while(curr!=NULL)
    {
        nextt=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nextt;
    }
    first=pre;



}
int main()
{
    init();
    createfirst(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    addNode(60);
    cout<<"before reverse: "<<endl;
    display();
    cout<<"after reverse: "<<endl;
    reverse();
    display();


}