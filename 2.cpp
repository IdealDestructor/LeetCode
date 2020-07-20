/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode(0);
        ListNode* cursor = root;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0){
            int l1Val = l1!= NULL ? l1->val : 0;
            int l2Val = l2!= NULL ? l2->val : 0;
            int sumVal = l1Val + l2Val + carry;
            carry = sumVal / 10;

            ListNode* sumNode = new ListNode(sumVal % 10);
            cursor->next = sumNode;
            cursor = sumNode;

            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        } 
        return root->next;
    }
};