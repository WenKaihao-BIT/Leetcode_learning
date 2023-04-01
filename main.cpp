#include <iostream>
#include "vector"
#include "leetcode/editor/cn/ListNode.h"
using namespace std;
int main() {
    vector<int>arr={1,2,3,4};
    ListNode*head=createLinkedList(arr);
    printLinkedList(head);
    return 0;
}
