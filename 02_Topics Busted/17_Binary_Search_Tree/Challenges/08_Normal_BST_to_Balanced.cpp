/*https://www.codingninjas.com/codestudio/problem-details/normal-bst-to-balanced-bst_920472*/

#include <iostream>
using namespace std;

void inorder(TreeNode<int> *root, vector<int> &in)
{

    if (root == NULL)
        return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int> *inorderToBST(int s, int e, vector<int> in)
{

    // base case

    if (s > e)
        return NULL;

    int mid = (s + e) / 2;

    TreeNode<int> *root = new TreeNode<int>(in[mid]);

    root->left = inorderToBST(s, mid - 1, in);
    root->right = inorderToBST(mid + 1, e, in);

    return root;
}

TreeNode<int> *flatten(TreeNode<int> *root)
{
    vector<int> inorderVal;
    // store inorder sorted values
    inorder(root, inorderVal);

    return inorderToBST(0, inorderVal.size() - 1, inorderVal);  


}

int main()
{
    int a;
    cout << endl;
    return 0;
}