/* Convert Binary Number in a Linked List to Integer */
/** Given head which is a reference node to a singly-linked list. 
 *  The value of each node in the linked list is either 0 or 1. 
 *  The linked list holds the binary representation of a number.
 *  Return the decimal value of the number in the linked list.
 *  
 *  Example 1:
 *  Input: head = [1,0,1]
 *  Output: 5
 *  Explanation: (101) in base 2 = (5) in base 10
 * 
 *  Example 2:
 *  Input: head = [0]
 *  Output: 0
 * 
 *  Example 3:
 *  Input: head = [1]
 *  Output: 1
 * 
 *  Example 4:
 *  Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
 *  Output: 18880
 * 
 *  Example 5:
 *  Input: head = [0,0]
 *  Output: 0
 * 
 *  Constraints:
 *  The Linked List is not empty.
 *  Number of nodes will not exceed 30.
 *  Each node's value is either 0 or 1. **/

#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head) {
    int count = 0;
    int answer = 0;
    ListNode *cur = head;

    while (cur != nullptr) {
        count++;
        cur = cur->next;
    }

    cur = head;

    while (cur != nullptr) {
        count--;
        answer += (cur->val)* pow (2,count);
        cur = cur->next;
    }

    return answer;
}

int main() {
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(0);
    ListNode *node3 = new ListNode(1);

    node1->next = node2;
    node2->next = node3;

    int answer = getDecimalValue(node1);

    cout << answer << endl;
    return 0;
}



