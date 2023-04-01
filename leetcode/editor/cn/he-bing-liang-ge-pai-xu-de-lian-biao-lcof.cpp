//输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。 
//
// 示例1： 
//
// 输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4 
//
// 限制： 
//
// 0 <= 链表长度 <= 1000 
//
// 注意：本题与主站 21 题相同：https://leetcode-cn.com/problems/merge-two-sorted-lists/ 
//
// Related Topics 递归 链表 👍 331 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//#include "ListNode.h"
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1== nullptr)
            return l2;
        if(l2== nullptr)
            return l1;
        ListNode *head= nullptr;
        if(l1->val<l2->val){
            head=l1;
            head->next= mergeTwoLists(l1->next,l2);
        }
        else{
            head=l2;
            head->next= mergeTwoLists(l1,l2->next);
        }


        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
int main(){
    Solution s;
    vector<int>arr1={1,2,4};
    vector<int>arr2={1,3,4};
    auto l1=createLinkedList(arr1);
    auto l2= createLinkedList(arr2);
    auto head=s.mergeTwoLists(l1,l2);
    printLinkedList(head);
}