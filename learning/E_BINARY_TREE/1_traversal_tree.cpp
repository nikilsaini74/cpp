// three traversals ARE preorder(root,left,right); inorder(left,root,right); postorder(left,right,root)

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;

public:
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    //    1
    //   / \
    //  2    3
    // / \  / \
  //  4   5 6  7
    cout << "Preorder traversal = ";
    preorder(root);
    cout << "\nInorder traversal = ";
    inorder(root);
    cout << "\nPostorder traversal = ";
    postorder(root);

    return 0;
}