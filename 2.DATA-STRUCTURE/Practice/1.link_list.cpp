#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if(n->Next!=NULL)
        {
            cout<<"->";
        }
        n = n->Next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fo = new Node();
    Node *fi = new Node();
    Node *si = new Node();

    head->value = 1;
    second->value = 2;
    third->value = 10;
    fo->value = 1;
    fi->value = 2;
    si->value = 10;

    head->Next = second;
    second->Next = third;
    third->Next = fo;
    fo->Next = fi;
    fi->Next = si;
    si->Next = NULL;


    display(head);

    return 0;
}