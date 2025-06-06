// https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTab=0&leftPanelTabValue=SUBMISSION
#include <iostream>
#include <vector>


void inorder(BinaryTreeNode<int>* root, vector<int> &arr) {
    if(root == NULL)
        return;
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inorderVal;
    inorder(root, inorderVal);

    int start = 0, end = inorderVal.size() -1;

    while(start < end) {
        int sum = inorderVal[start] + inorderVal[end];

        if(sum == target)
            return true;
        else if(sum > target)
            end--;
        else 
           start++;

    }

    return false;
}
