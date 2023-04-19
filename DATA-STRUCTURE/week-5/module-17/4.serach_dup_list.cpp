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

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);
void insertionAtSpecificPosition(Node *&head, int pos, int val);
int searchByValueUnique(Node *&head, int key);

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    // s1: new node creation
    Node *newNode = new Node(val);
    // s2: update of new node next
    newNode->Next = head;
    // s3: update of head
    head = newNode;
}

void display(Node *n)
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
    cout << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;

    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;

    if (temp == NULL)
    {
        return -1;
    }
    while (temp->value != key)
    {
        if (temp->Next == NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    int value, position;

    // choice 1: insertion at head
    // choice 2: insertion at tail
    // choice 3: insertion at certain position

    cout << "choice 1: insertion at head:" << endl
         << "choice 2: insertion at tail: " << endl
         << "choice 3: insertion at specific positiin: " << endl
         << "choice 4: search a value(unique list): " << endl
         << "choice 0: Exit" << endl
         << endl;
    cout << "Next choice: ";
    int choice;
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            insertAtHead(head, value);
            break;

        case 2:
            cout << "Enter the value: ";
            cin >> value;
            insertAtTail(head, value);
            break;

        case 3:
            cout << "Enter the desired pos: ";
            cin >> position;
            cout << "Enter the value: ";
            cin >> value;
            insertionAtSpecificPosition(head, position, value);
            break;

        case 4:
            cout << "Enter the value: ";
            cin >> value;
            position = searchByValueUnique(head, value);
            if (position != -1)
            {
                cout << "The number at position " << position << endl;
            }
            else
            {
                cout << "The number is not yet the list" << endl;
            }
            break;

        default:
            break;
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << endl;
    cout << "Linked list: ";
    display(head);
    cout << "Length of the list: " << countLength(head) << endl;

    return 0;
}
