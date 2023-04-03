//输入两棵二叉树A和B，判断B是不是A的子结构。(约定空树不是任意一个树的子结构) 
//
// B是A的子结构， 即 A中有出现和B相同的结构和节点值。 
//
// 例如: 给定的树 A: 
//
// 3 / \ 4 5 / \ 1 2 给定的树 B： 
//
// 4 / 1 返回 true，因为 B 与 A 的一个子树拥有相同的结构和节点值。 
//
// 示例 1： 
//
// 输入：A = [1,2,3], B = [3,1]
//输出：false
// 
//
// 示例 2： 
//
// 输入：A = [3,4,5,1,2], B = [4,1]
//输出：true 
//
// 限制： 
//
// 0 <= 节点个数 <= 10000 
//
// Related Topics 树 深度优先搜索 二叉树 👍 732 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//#include "BinaryTree.h"
class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        bool result= false;
        if(A!= nullptr&&B!= nullptr){
            //如果根节点相同
            if(A->val==B->val)
                result=tree1hastree2(A,B);
            //左子树
            if(!result)
                result=isSubStructure(A->left,B);
            if(!result)
                result=isSubStructure(A->right,B);
        }
       return result;
    }
    //此函数为找到相应相等的根节点
    bool tree1hastree2(TreeNode* A, TreeNode* B){
        if(B== nullptr)
            return true;
        if(A== nullptr)
            return false;
        if(A->val!=B->val)
            return false;
        return tree1hastree2(A->left,B->left)&& tree1hastree2(A->right,B->right);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
int main(){
    TreeNode*A = createTree("1,3,null,4,5,null,null");
    TreeNode*B = createTree("3,4,6,");
    PrintTree(A);
    Solution s;
    cout<<s.isSubStructure(A,B);
    return 0;
}