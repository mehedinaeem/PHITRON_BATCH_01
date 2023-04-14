#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};

display(Node *n)
{
    while (n != NULL)
        {
            cout << n->value;
    if (n -> Next != NULL)
        {
            cout << "--";
        }
    n = n->Next;
    //cout << endl<<endl;
        }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();

    head->value = 10;
    second->value = 50;

    head->Next = second;
    second->Next = NULL;

    display(head);

    return 0;
}
