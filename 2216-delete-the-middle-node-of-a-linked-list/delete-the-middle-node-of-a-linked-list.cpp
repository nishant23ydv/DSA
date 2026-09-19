class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr) return nullptr;
        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        int mid = cnt / 2;
        temp = head;
        int cnt1 = 0;

        while (cnt1 < mid - 1) {
            temp = temp->next;
            cnt1++;
        }
        temp->next = temp->next->next;

        return head;
    }
};