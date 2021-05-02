/* 108. Convert Sorted Array to Binary Search Tree */
/** Given an integer array nums where the elements are sorted in ascending order, 
 *  convert it to a height-balanced binary search tree.
 *  A height-balanced binary tree is a binary tree in which the depth of the two subtrees 
 *  of every node never differs by more than one.
 * 
 *  Example 1:
 *  Input: nums = [-10,-3,0,5,9]
 *  Output: [0,-3,9,-10,null,5]
 *  Explanation: [0,-10,5,null,-3,null,9] is also accepted:
 * 
 *  Example 2:
 *  Input: nums = [1,3]
 *  Output: [3,1]
 *  Explanation: [1,3] and [3,1] are both a height-balanced BSTs.
 * 
 *  Constraints:
 *  1 <= nums.length <= 10^4
 *  -10^4 <= nums[i] <= 10^4
 *  nums is sorted in a strictly increasing order.**/

#include <vector>
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *sortedArrayToBST(vector<int> &nums, int start, int end) {
    if (start > end) return nullptr;

    int middle = (start + end) / 2;
    TreeNode *newNode = new TreeNode(nums[middle]);

    newNode->left = sortedArrayToBST(nums, start, middle - 1);
    newNode->right = sortedArrayToBST(nums, middle + 1, end);

    return newNode;
}

TreeNode* sortedArrayToBST(vector<int> &nums) {
    return sortedArrayToBST(nums, 0, nums.size()-1);
}

int main() {
    vector<int> nums0 {-10,-3,0,5,9};
    vector<int> nums1 {1,3};

    TreeNode *ans0 = sortedArrayToBST(nums0);
    TreeNode *ans1 = sortedArrayToBST(nums1);

    return 0;e
}

