#include <bits/stdc++.h>
using namespace std;

void postorder(
    vector<int>& preorder,
    int preStart,
    int preEnd,
    vector<int>& inorder,
    int inStart,
    int inEnd,
    unordered_map<int, int>& inIndex
) {
    if (preStart > preEnd || inStart > inEnd)
        return;

    int root = preorder[preStart];
    int rootIndex = inIndex[root];
    int leftSize = rootIndex - inStart;

    // left subtree
    postorder(
        preorder,
        preStart + 1,
        preStart + leftSize,
        inorder,
        inStart,
        rootIndex - 1,
        inIndex
    );

    // right subtree
    postorder(
        preorder,
        preStart + leftSize + 1,
        preEnd,
        inorder,
        rootIndex + 1,
        inEnd,
        inIndex
    );

    cout << root << " ";
}

int main() {
    int n;
    cin >> n;

    vector<int> preorder(n), inorder(n);
    for (int i = 0; i < n; i++)
        cin >> preorder[i];
    for (int i = 0; i < n; i++)
        cin >> inorder[i];

    unordered_map<int, int> inIndex;
    for (int i = 0; i < n; i++)
        inIndex[inorder[i]] = i;

    postorder(preorder, 0, n - 1, inorder, 0, n - 1, inIndex);
    cout << endl;
}
