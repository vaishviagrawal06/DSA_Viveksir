#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *first, *temp, *ttemp;

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

void delete_last()
{
    temp = first;
    while (temp->next != NULL)
    {
        ttemp = temp;
        temp = temp->next;
    }
    ttemp->next = NULL;
    delete temp;
}

int main()
{
    init();
    createfirst(10);
    addNode(20);
    addNode(30);
    addNode(40);
    cout << "before deleting last node: " << endl;
    display();
    delete_last();
    cout << "after deleting last node: " << endl;
    display();
}