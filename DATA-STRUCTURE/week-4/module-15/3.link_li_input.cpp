#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    // constructor creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

insertAtTail(Node * &head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return 0;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
        {
            cout << " <-> ";
        }
        n = n->Next;
        // cout << endl<<endl;
    }
}

int main()
{
    Node *head = NULL;
    int n;
    // cout<<"Enter the value:";
    // cin>>n;
    char choice='y';
    while(choice=='y')
    {
        cout<<"Enter the value:";
        cin>>n;
        insertAtTail(head,n);
        cout<<"Do u want to continue:(y/n)";
        cin>>choice;
    }

    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // Node *second = new Node();

    // head->value = 10;
    // second->value = 50;

    // head->Next = second;
    // second->Next = NULL;

    display(head);

    return 0;
}
