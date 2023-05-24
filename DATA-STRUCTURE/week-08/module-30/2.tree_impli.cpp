#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftchild;
    treeNode *rightchid;

    // constructor
    treeNode(int value)
    {
        data = value;
        leftchild = NULL;
        rightchid = NULL;
    }
};

void printTree(treeNode *root, int level);
void spacePrint(level);

void printTree(treeNode *root, int level)
{
    if(root==NULL)
    {
        return;
    }
   if(root->leftchild==NULL && root->rightchid==NULL)
   {
       cout<<root->data<<endl;
   }
   else
   {
    cout<<endl;
    spaceprint(level);
    cout<<"Root"<<root->data<<endl;
   }

   if(root->leftchid!=NULL)
   {
    spacePrint(level);
    cout<<"Left: ";
    printTree(root->leftchid,level+1);
   }

   if(root->rightchild!=NULL)
   {
    spacePrint(level);
    cout<<"Right: ";
    printTree(root->rightchid,level+1);
   }

}

void spacePrint(int level)
{
    for(int i=0;i<level;i++)
    {
        cout<<"   ";
    }
}

int main()
{
    int n;
    cin >> n;
    treeNode *allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode[-1];
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
        if (right != 0)
        {
            allNodes[i]->rightchid = allNodes[right];
        }
    }

    printTree(allNodes[0], 0);

    return 0;
}