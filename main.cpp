#include <iostream>
#include "vector"
#include "leetcode/editor/cn/ListNode.h"
#include "leetcode/editor/cn/BinaryTree.h"
using namespace std;
int main() {
    string s="3,4,5,null,1,2,null";
    auto ss=string_split(s,',');
    TreeNode* head=createTree(s);
    PrintTree(head);
    return 0;
}
