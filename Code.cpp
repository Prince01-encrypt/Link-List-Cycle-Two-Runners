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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL) {
            return false;
        }
        ListNode* pf = head, *ps = head;
        
        while(pf != NULL && ps != NULL) {
            pf = pf -> next;
            
            if(pf == NULL) {
                return false;
            }
            pf = pf -> next;
            
            if(pf == NULL) {
                return false;
            }
            ps = ps -> next;
            
            if(pf == ps) {
                return true;
            }
        }
        return false;
    }
};
