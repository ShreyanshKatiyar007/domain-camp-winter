// given a sorted arraylist in ascending order. writte a c++ code to represent it in highly balanced binary structure.

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

TreeNode* createBalancedTree(const vector<int>& sortedArray, int start, int end) {
    if (start > end) {
        return nullptr; 
    }

    int mid = start + (end - start) / 2; 
    TreeNode* root = new TreeNode(sortedArray[mid]); 

    root->left = createBalancedTree(sortedArray, start, mid - 1);
    root->right = createBalancedTree(sortedArray, mid + 1, end);

    return root;
}

void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->value << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->value << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main() {
    
    vector<int> sortedArray;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the sorted elements in ascending order:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        sortedArray.push_back(value);
    }

    TreeNode* root = createBalancedTree(sortedArray, 0, n - 1);

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    return 0;
}
