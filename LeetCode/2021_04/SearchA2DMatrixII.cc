/** 240.Search a 2D Matrix II */
/** Write an efficient algorithm that searches for a target value in an m x n integer matrix. 
 *  The matrix has the following properties:
 * 
 *  Integers in each row are sorted in ascending from left to right.
 *  Integers in each column are sorted in ascending from top to bottom.
 * 
 *  Example 1:
 *  Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
 *  Output: true
 * 
 *  Example 2:
 *  Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
 *  Output: false
 * 
 *  Constraints:
 *  m == matrix.length
 *  n == matrix[i].length
 *  1 <= n, m <= 300
 *  -10^9 <= matix[i][j] <= 10^9
 *  All the integers in each row are sorted in ascending order.
 *  All the integers in each column are sorted in ascending order.
 *  -10^9 <= target <= 10^9 **/

#include <vector>
#include <iostream>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
}

int main() {
    vector<int> row00 {1,4,7,11,15};
    vector<int> row01 {2,5,8,12,19};
    vector<int> row02 {3,6,9,16,22};
    vector<int> row03 {10,13,14,17,24};
    vector<int> row04 {18,21,23,26,30};
    vector<vector<int>> matrix0 {row00, row01, row02, row03, row04};

    bool ans0_0 = searchMatrix(matrix0, 5);
    bool ans0_1 = searchMatrix(matrix0, 20);

    cout << ans0_0 << endl; // true
    cout << ans0_1 << endl; // false

    return 0;
}

