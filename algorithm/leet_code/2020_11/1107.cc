/* Find the Smallest Divisor Given a Threshold */

/** Given an array of integers nums and an integer threshold, we will 
 *  choose a positive integer divisor and divide all the array by it and sum the result 
 *  of the division. Find the smallest divisor such that the result mentioned above is less 
 *  than or equal to threshold.
 * 
 *  Each result of division is rounded to the nearest integer greater than or equal to that element. 
 *  (For example: 7/3 = 3 and 10/2 = 5).
 *  
 *  It is guaranteed that there will be an answer.
 * 
 *  Example 1:
 *  Input: nums = [1,2,5,9], threshold = 6
 *  Output: 5
 *  Explanation: We can get a sum to 17 (1+2+5+9) if the divisor is 1. 
 *  If the divisor is 4 we can get a sum to 7 (1+1+2+3) and if the divisor 
 *  is 5 the sum will be 5 (1+1+1+2). 
 * 
 *  Example 2:
 *  Input: nums = [2,3,5,7,11], threshold = 11
 *  Output: 3
 * 
 *  Example 3:
 *  Input: nums = [19], threshold = 5
 *  Output: 4
 * 
 *  Constraints:
 *  1 <= nums.length <= 5 * 10^4
 *  1 <= nums[i] <= 10^6
 *  nums.length <= threshold <= 10^6 **/

#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    sort(nums.begin(), nums.end());
    
    int next, cur, sum;
    int i = -1;
    double div;
    bool found;

    if (nums.empty()) return 0;

    cur = 1;
    next = nums[0];

    while (true) {
        found = false;

        for (int j = 1; j <= next/cur; ++j) {
            div = j * cur;
            sum = 0;
            for (int k = 0; k < nums.size(); ++k) {
                sum += ceil(nums[k]/div);
            }

            if (sum <= threshold) {
                found = true;
                break;
            }
        }

        if (found) break;

        i++;
        cur = nums[i];
        next = (i == nums.size()-1) ? nums[i] : nums[i+1];
    }

    return div;
}

int main() {
    int num  = 2;
    double num2 = 3;
    cout << num/num2 << endl;
    cout << ceil(num/num2) << endl;

    //vector<int> nums {1,2,5,9};
    //vector<int> nums {2,3,5,7,11};
    //vector<int> nums {19};
    vector<int> nums {2620,5743,4716,5581,9508,5404,2448,2224,9682,735,7778,2886,9864,5081,5437,2208,
    2378,5281,8177,6801,5896,307,9618,7899,2268,986,1114,4600,4093,2476,2623,6312,4061,
    5846,9245,3952,2344,65,593,6079,8719,8727,717,8740,2940,2291,339,8275,2890,7222};
    int threshould = 2451;
    int answer = smallestDivisor(nums, threshould);
    // 답은 98
    cout << answer << endl;

    return 0;
}


