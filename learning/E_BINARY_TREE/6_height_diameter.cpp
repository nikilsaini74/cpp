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

    //  pair<int, int> diaFast(node *root) //<dia , height>
    // {
    //     if (root == NULL)
    //     {
    //         pair<int, int> p = make_pair(0, 0);
    //         return p;
    //     }
    //     pair<int, int> left = diaFast(root->left);
    //     pair<int, int> right = diaFast(root->right);
    //     int opt1 = left.first;
    //     int opt2 = right.first;
    //     int opt3 = left.second + right.second + 1;

    //     pair<int, int> ans;
    //     ans.first = max(max(opt1, opt2), opt3);
    //     ans.second = max(left.second, right.second) + 1;
    //     return ans;
    // }
};

int calHeight(node *root)
{
    if (root == NULL)
        return 0;
    int lheight = calHeight(root->left);
    int rheight = calHeight(root->right);
    return max(lheight, rheight) + 1;
}

int calDiameter(node *root) // longest path btw two nodes
{
    if (root == NULL)
        return 0;
    int lheight = calHeight(root->left);
    int rheight = calHeight(root->right);
    int currDia = lheight + rheight + 1;

    int lDia = calDiameter(root->left);
    int rDia = calDiameter(root->right);
    return max(currDia, max(lDia, rDia));
}

int calculateD(node *root, int *height) // optimistic way
{
    int lh = 0;
    int rh = 0;
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int lDia = calculateD(root->left, &lh);
    int rDia = calculateD(root->right, &rh);

    int currDia = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDia, max(lDia, rDia));
}

int main()
{
    int height = 0;
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->right->right = new node(7);

    cout << calHeight(root) << endl;
    cout << calDiameter(root) << endl;
    cout << calculateD(root, &height) << endl;
    //  cout << diaFast(root) << endl;
    return 0;
}