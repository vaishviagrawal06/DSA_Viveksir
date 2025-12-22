#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
using namespace std;

struct node {
    int data;
    node *next;
};

node *first, *temp, *ttemp, *p;

void init() {
    first = temp = ttemp = null;
}

void createfirst(int val) {
    first = new node;
    first->next = null;
    first->data = val;
}
void addnode(int val) {
    temp = first;
    while (temp->next != null) {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = null;
    temp->next = ttemp;
    
    
}

void disp() {
    temp = first;
    cout << "All numbers:" << endl;
    while (temp != null) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
 
}

void add_after(int x,int y){
    temp = first;
    while(temp ->data !=x){
        temp = temp ->next;
        ttemp = temp ->next;
        p = new node;
        p ->data = y;
        temp->next = p;
        p ->next = ttemp;

    }
}
int main() {
    init();

    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter value of 1  ";
    cin >> val;
    createfirst(val);

    for (int i = 1; i < n; i++) {
        cout << "Enter value for node "<< i+1<<" ";
        cin >> val;
        addnode(val);
    }

    disp();

    int x, y;
    cout << "\nEnter value after which to insert: ";
    cin >> x;
    cout << "Enter value to insert: ";
    cin >> y;

    add_after(x, y);

    disp();

}