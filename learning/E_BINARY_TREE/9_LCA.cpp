// lowest common ancestor -> path changer

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

node *LCA(node *root, int n1, int n2)
{

    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    node *leftLCA = LCA(root->left, n2, n1);
    node *rightLCA = LCA(root->right, n2, n1);

    if (root->left && root->right)
        return root;
    if (root->left != NULL)
        return leftLCA;
    return rightLCA;
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
    int n1 = 7, n2 = 6;
    node *lca = LCA(root, n1, n2);
    cout << lca->data;
    return 0;
}