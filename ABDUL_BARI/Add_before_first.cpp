#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef struct Add_before_first{
    int data;
    struct Add_before_first *next;
} node;

node *first,*temp;

void init()
{
    first=temp=NULL;
}

void Add_before_first(int x)
{
    temp=new node;
    temp->data = x;
    temp->next=first;

    first=temp;
}

void createfirst(int x)
{
    first = new node;
    first->data=x;
    first->next=NULL;
}

void display()
{
    temp=first;

    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<endl;
        temp = temp->next;
    }
}

int main()
{
    int i, ch = 1;

    init();

    // create first node
    printf("Enter data for first node\n");
    scanf("%d", &i);

    createfirst(i);

    printf("First node created\n");

    // add node at last
    while (ch == 1)
    {
        printf("\nDo you want to add node at last?\n");
        printf("Press 1 for Yes and 0 for No\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            cout << "Enter data for new node\n";
            cin >> i;

            Add_before_first(i);

            printf("Node Created Successfully\n");
        }
    }

    // display linked list
    printf("\nLinked List is:\n");
    display();

    getch();
    return 0;
}
