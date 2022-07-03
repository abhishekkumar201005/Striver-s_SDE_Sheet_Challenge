//----------234. Palindrome Linked List-----

//  bool isPalindrome(ListNode* head) {
//          //make slow and fast pointer 
//         ListNode *slow = head, *fast = head, *prev, *temp;
        
//         //floyd's the LL
//         while (fast && fast->next)
//         {
//             slow = slow->next, fast = fast->next->next;
//         }
//         //update nodes pointer
//         prev = slow, slow = slow->next, prev->next = NULL;
//         // reversal of ll from end side
//         while (slow)
//         {
//             temp = slow->next, slow->next = prev, prev = slow, slow = temp;
//         }
//         fast = head, slow = prev;
//         //comparison 
//         while (slow)
//             if (fast->val != slow->val) return false;
//             else fast = fast->next, slow = slow->next;
//         return true;
//     }