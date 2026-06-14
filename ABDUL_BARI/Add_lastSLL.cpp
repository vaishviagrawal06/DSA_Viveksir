#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
// #define NULL 0

// self referential pointer
typedef struct Add_lastSLL
{
    int data;
    struct Add_lastSLL *next;
} node;

// temprory pointer
node *first, *temp, *ttemp;

void init()
{
    first = temp = ttemp = NULL;
}

void addnode(int x)
{
    temp = first;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    ttemp = new node;
    ttemp->data = x;
    ttemp->next = NULL;
    temp->next = ttemp;
}
// first node create
void createfirst(int x)
{
    first = new node;
    first->data = x;
    first->next = NULL;
}

void display()
{
    temp = first;

    while (temp != NULL)
    {
        cout << temp->data;
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

            addnode(i);

            printf("Node Created Successfully\n");
        }
    }

    // display linked list
    printf("\nLinked List is:\n");
    display();

    getch();
    return 0;
}


// int main()
// {
// 	init();
// 	createfirst(10);
// 	addnode(20);
// 	addnode(30);
// 	addnode(50);
// 	addnode(60);
// 	display();

// }
