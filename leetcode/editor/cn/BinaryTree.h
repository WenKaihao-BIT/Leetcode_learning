//
// Created by Q on 2023/4/1.
//

#ifndef LEETCODE_LEARNING_BINARYTREE_H
#define LEETCODE_LEARNING_BINARYTREE_H
#include<iostream>
#include<string>
#include<vector>
#include <sstream>
#include <cmath>
#include "queue"
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    TreeNode()=default;
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
TreeNode *createTree(string tree){
    vector<string>ss= string_split(tree,',');
    size_t len=ss.size();
//    cout<<ceil(float (len/2.0));
    if(len==0)
        return nullptr;
    //采样层次遍历法建立树结构
    queue<TreeNode*>nodes;
    TreeNode *head=new TreeNode(stoi(ss.at(0)));
//    cout<<head->val<<endl;
    nodes.push(head);
    for(int i=1;i<len;i++){
        TreeNode *p=nodes.front();
        if(ss.at(i)!="null"){
            p->left=new TreeNode(stoi(ss.at(i)));
//            cout<<p->left->val<<endl;
            nodes.push(p->left);
        }
        i++;
        if(ss.at(i)!="null"){
            p->right=new TreeNode(stoi(ss.at(i)));
//            cout<<p->right->val<<endl;
            nodes.push(p->right);
        }
        nodes.pop();
    }
    return head;
}
void PrintTree(TreeNode *head){
    if(head== nullptr)
        return;
    queue<TreeNode*>nodes;
    nodes.push(head);
    vector<vector<string>>result;

    while (!nodes.empty()){
        vector<string>rows;
        int sz=nodes.size();
        for(int i=0;i<sz;i++){
            rows.push_back(to_string(nodes.front()->val));
            if(nodes.front()->left!= nullptr)
                nodes.push(nodes.front()->left);
            if(nodes.front()->right!= nullptr)
                nodes.push(nodes.front()->right);
            nodes.pop();
        }
        result.push_back(rows);
    }
    for(auto item:result){
        for(auto item2:item)
            cout<<item2<<"  ";
        cout<<endl;
    }
}
#endif //LEETCODE_LEARNING_BINARYTREE_H
