#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *getNewNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *Insert(node *root, int data)
{
    if (root == NULL)
    {
        root = getNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool search(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

int main()
{
    node *root = new node;
    root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    int num;
    cin >> num;
    if (search(root, num))
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    return 0;
}

// to make the return type as void
/*
void Insert( node ** root, int data)
{
    if(*root == NULL)
    {
        *root = getNewNode(data);
        return *root;
    }
}

and in main, pass
root = Insert(&root, 15)

we can also make root global so that every function in the program can use its value

*/
