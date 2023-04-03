//
// Created by Q on 2023/4/1.
//

#ifndef LEETCODE_LEARNING_BINARYTREE_H
#define LEETCODE_LEARNING_BINARYTREE_H
#include<iostream>
#include<string>
#include<vector>
#include <sstream>

using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     int val;
     TreeNode *left;
     TreeNode *right;
  };

vector<string> string_split(string str,const char split){
    istringstream iss(str);
    string token;
    vector<string>result;
    while (getline(iss,token,split))
        result.push_back(token);
    return result;
}
//字符串转树结构
TreeNode * createTree(vector<string>ss);
TreeNode *StrToTreeNode(string tree){
    vector<string>ss= string_split(tree,',');
    return createTree(ss);
};
//构造树结构
TreeNode * createTree(vector<string>ss){

}
#endif //LEETCODE_LEARNING_BINARYTREE_H
