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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

void inorderPrint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
        return NULL;
    int curr = postorder[idx];
    idx--;
    node *Node = new node(curr);
    if (start == end)
        return Node;

    int pos = search(inorder, start, end, curr);

    Node->right = buildTree(postorder, inorder, pos + 1, end);
    Node->left = buildTree(postorder, inorder, start, pos - 1);

    return Node;
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = buildTree(postorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}