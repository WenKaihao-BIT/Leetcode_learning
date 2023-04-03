#include <iostream>
#include "vector"
#include "leetcode/editor/cn/ListNode.h"
#include "leetcode/editor/cn/doc/BinaryTree.h"
using namespace std;
int main() {
    string s="1,2,3,null";
    auto ss=string_split(s,',');
    for(auto item:ss) cout<<item<<endl;
    return 0;
}
