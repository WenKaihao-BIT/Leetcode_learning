//
// Created by Q on 2023/4/1.
//

#ifndef LEETCODE_LEARNING_LISTNODE_H
#define LEETCODE_LEARNING_LISTNODE_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct ListNode {
    explicit ListNode(int x) : val(x), next(nullptr) {}
    int val;
    ListNode *next;

  };
//创建链表
ListNode* createLinkedList(const vector<int>&arr) {//将输入的数组输入到链表中
    if (arr.size() == 0) {
        return nullptr;
    }
    ListNode *head = new ListNode(arr.at(0));
    ListNode *current = head;
    for (int i = 1; i < arr.size(); i++) {//过程
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}
//打印链表
void printLinkedList(ListNode *head){//将链表结果打印
    ListNode *current =  head;
    while (current!= nullptr){
        cout<<current->val<<" -> ";
        current = current->next;
    }
    cout<<"NULL";
}
#endif //LEETCODE_LEARNING_LISTNODE_H
