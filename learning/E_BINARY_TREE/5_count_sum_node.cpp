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

int countNode(node *root)
{
    if (root == NULL)
        return 0;

    return countNode(root->left) + countNode(root->right) + 1;
}
int sumNode(node *root)
{
    if (root == NULL)
        return 0;

    return sumNode(root->left) + sumNode(root->right) + root->data;
}

void sumReplace(node *root)
{
    if (root == NULL)
        return;
    sumReplace(root->left);
    sumReplace(root->right);
    if (root->left != NULL)
        root->data += root->left->data;
    if (root->right!=NULL)
        root->data += root->right->data;
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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
    cout << countNode(root) << endl;
    cout << sumNode(root) << endl;
    preorder(root);
    cout << "\n";
    sumReplace(root);
    preorder(root);

    return 0;
}