#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }
    };

*************************************************************/
void inorder(TreeNode<int> *root, vector<int> &in)
{
    if (root == NULL)
        return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

vector<int> mergeArray(vector<int> &a, vector<int> &b)
{

    vector<int> ans(a.size() + b.size());

    int i = 0, j = 0, k = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            ans[k++] = a[i];
            i++;
        }
        else
        {
            ans[k++] = b[j];
            j++;
        }
    }

    while (i < a.size())
    {
        ans[k++] = a[i];
        i++;
    }

    while (j < b.size())
    {
        ans[k++] = b[j];
        j++;
    }

    return ans;
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

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2)
{
    // step 1 : store inorder o(M)

    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    // merge sortead arrays  O(m+n)
    vector<int> mergedArraydone = mergeArray(bst1, bst2);

    int s = 0;
    int e = mergedArraydone.size() - 1;

    return inorderToBST(s, e, mergedArraydone);
}