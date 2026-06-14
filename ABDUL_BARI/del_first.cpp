#include <iostream>
using namespace std;

// #define NULL 0

struct del_first
{
    int data;
    struct del_first *next;
};

del_first *first, *temp, *ttemp;

void init()
{
    first = temp = ttemp = NULL;
}

void createfirst(int x)
{
    first = new del_first;
    first->data = x;
    first->next = NULL;
}

void addnode(int x)
{
    temp = first;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    ttemp = new del_first;
    ttemp->data = x;
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

void delfirst()
{
    temp = first;
    first = temp->next;
    temp->next = NULL;
    delete temp;
}

int main()
{
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);
    addnode(60);
    cout << "Before deleting first node" << endl;
    display();
    delfirst();
    cout << "After deleting first node"<<endl;
    display();
}
