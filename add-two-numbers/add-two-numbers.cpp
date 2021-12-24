/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head;
        ListNode* temp = new ListNode();
        head = temp;
        int sum=0, c=0;
        if(l1 != NULL) {
                sum+=l1->val;
                l1=l1->next;
        }
        if(l2 != NULL) {
            sum+=l2->val;
            l2=l2->next;
        }
        temp->val = sum%10;
        c = sum/10;
        while(l1 != NULL || l2 != NULL || c) {
            sum=0;
            ListNode* temp2 = new ListNode();
            temp->next = temp2;
            temp = temp->next;
            if(l1 != NULL) {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2 != NULL) {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=c;
            c=0;
            temp->val = sum%10;
            c=sum/10;
        }
        return head;
    }
};
//Credits: https://www.youtube.com/watch?v=LBVsXSMOIk4&t=2s