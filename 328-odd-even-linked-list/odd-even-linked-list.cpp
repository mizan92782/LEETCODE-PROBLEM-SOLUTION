class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        // Check if the list is empty or has only one node
        if (!head || !head->next) {
            return head;
        }

        ListNode* odd = new ListNode(0);
        ListNode* even = new ListNode(0);

        ListNode* oddMarker = odd;
        ListNode* evenMarker = even;

        int index = 0;

        while (head) {
            if (index % 2 == 0) {
                even->next = head;
                even = even->next;
            } else {
                odd->next = head;
                odd = odd->next;
            }

            head = head->next;
            index++;
        }

        // Connect even list to odd list
        even->next = oddMarker->next;

        // Set the end of the odd list to NULL to avoid cycles
        odd->next = NULL;

        return evenMarker->next;
    }
};
