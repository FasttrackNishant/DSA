#include <iostream>
using namespace std;

class info
{
public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(TreeNode<int> *root, int &ans)
{
    // base case

    if (root == NULL)
    {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    infor currNode;

    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.max);
    currNode.mini = min(root->data, left.mini);

    is(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
    {
        currNode.isBST = true;
    }
    else
    {
        currNode.isBST = false;
    }

    // answer update

    if (currNode.isBST)
    {
        ans = max(ans, currNode.size);
    }
    return currNode;
}

int largestBST(TreeNode<int> *root)
{

    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}

int main()
{
    int a;
    cout << endl;
    return 0;
}