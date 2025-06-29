#include <iostream>
# include "Tree.h"
using namespace std;

bool isBST(Node *root, int min, int max)
{
    // base case
    if (root == NULL)
    {
        return true;
    }

    if (root->data >= min && root->data <= max)
    {
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);

        return left && right;
    }
    else
    {
        return false;
    }
}

bool validateBST(Node *root)
{
    return isBST(root, INT_MIN, INT_MAX);
}

int main()
{
    int a;
    cout << endl;
    return 0;
}