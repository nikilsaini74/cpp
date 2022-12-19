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

int calHeight(node* root)
{
    if(root == NULL)
    return 0;
    int lheight = calHeight(root->left) ;
    int rheight = calHeight(root->right) ;
    return max(lheight,rheight) + 1;
}

int calDiameter(node* root)
{
     if(root == NULL)
    return 0;
    int lheight = calHeight(root->left) ;
    int rheight = calHeight(root->right) ;
    int currDia = lheight + rheight + 1;

    int lDia = calDiameter(root->left);
    int rDia = calDiameter(root->right);
     return max(currDia, max(lDia,rDia));
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
       root->right->right->right = new node(7);
    
    cout<<calHeight(root)<<endl;
     cout<<calDiameter(root);
    return 0;
}