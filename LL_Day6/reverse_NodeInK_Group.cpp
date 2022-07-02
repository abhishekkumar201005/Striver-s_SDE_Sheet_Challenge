  	/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */



//-----------------------------------CODE-------------------------------

    
    // ListNode* reverseKGroup(ListNode* head, int k) {
    //     ListNode* cursor = head;
    //     for(int i = 0; i < k; i++){
    //         if(cursor == nullptr) return head;
    //         cursor = cursor->next;
    //     }
    //     ListNode* curr = head;
    //     ListNode* prev = nullptr;
    //     ListNode* nxt = nullptr;
    //     for(int i = 0; i < k; i++){
    //         nxt = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = nxt;
    //     }
    //     head->next = reverseKGroup(curr, k);
    //     return prev;
    // }