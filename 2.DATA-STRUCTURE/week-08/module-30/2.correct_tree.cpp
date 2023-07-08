#include <iostream>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftchild;
    treeNode *rightchild;

    // constructor
    treeNode(int value)
    {
        data = value;
        leftchild = NULL;
        rightchild = NULL;
    }
};

void printTree(treeNode *root, int level);
void spacePrint(int level);

void printTree(treeNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (root->leftchild == NULL && root->rightchild == NULL)
    {
        cout << root->data << endl;
    }
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data << endl;
    }

    if (root->leftchild != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->leftchild, level + 1);
    }

    if (root->rightchild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->rightchild, level + 1);
    }
}

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

int main()
{
    int n;
    cin >> n;
    treeNode *allNodes[n];

    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;
        if (left != -1)
        {
            allNodes[i]->leftchild = allNodes[left];
        }
        if (right != -1)
        {
            allNodes[i]->rightchild = allNodes[right];
        }
    }

    printTree(allNodes[0], 0);

   // Freeing dynamically allocated memory
    for (int i = 0; i < n; i++)
    {
        delete allNodes[i];
    }

    return 0;
}
