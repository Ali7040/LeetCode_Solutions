class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if (head == nullptr || n <= 0) {
            return nullptr;
        }
        ListNode dummy(0);
        dummy.next = head;

        ListNode * fast= &dummy;
        ListNode * slow = &dummy;

          for (int i = 0; i <= n; ++i) {
            if (fast == nullptr) {
                return nullptr;
            }
            fast = fast->next;
        }
         while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* toRemove = slow->next;
        slow->next = slow->next->next;
        delete toRemove;

        return dummy.next;
    }
};