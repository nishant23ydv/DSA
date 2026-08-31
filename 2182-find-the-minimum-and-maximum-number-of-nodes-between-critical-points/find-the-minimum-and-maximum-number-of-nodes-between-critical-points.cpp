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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
         ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nextt = head->next->next;

        vector<int> temp2;
        int cnt = 2;
        while (nextt != nullptr) {
            if ((curr->val > prev->val && curr->val > nextt->val) ||
                (curr->val < prev->val && curr->val < nextt->val)) {

                temp2.push_back(cnt);
            }

            prev = curr;
            curr = nextt;
            nextt = nextt->next;

            cnt++;
        }
        if (temp2.size() < 2) {
            return {-1, -1};
        }
        int maxi = temp2.back() - temp2.front();
        int mini = INT_MAX;

        for (int i = 1; i < temp2.size(); i++) {
            mini = min(mini, temp2[i] - temp2[i - 1]);
        }

        return {mini, maxi};


    }
};