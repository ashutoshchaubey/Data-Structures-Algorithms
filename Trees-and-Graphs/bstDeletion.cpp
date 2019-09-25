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
    return root;,`
}

node *FindMin(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

node *Delete(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    else if (data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = Delete(root->right, data);
    }
    else
    {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }

        // case:2 One child
        else if (root->left == NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }

        // case 3: two children
        else
        {
            node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, data);
        }
    }
    return root;
}

void Inorder(node *root)
{
    if (root == NULL)
        return;

    Inorder(root->left);        //Visit left subtree
    cout << root->data << "\n"; //Print data
    Inorder(root->right);       // Visit right subtree
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "\n";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data;
}



int main()
{
    node *root = new node;
    root = NULL;
    root = Insert(root, 4);
    root = Insert(root, 2);
    root = Insert(root, 5);
    root = Insert(root, 1);
    root = Insert(root, 3);
    // root = Delete(root, 15);
    cout << "Inorder: ";
    Inorder(root);
    cout << "\n";
    cout << "preorder: ";
    preOrder(root);
    cout << "\n";
    cout << "postorder :";
    postOrder(root);
    cout << "\n";
    return 0;
}




