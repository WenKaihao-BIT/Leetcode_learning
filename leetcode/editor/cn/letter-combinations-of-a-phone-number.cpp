//给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。 
//
// 给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。 
//
// 
//
// 
//
// 示例 1： 
//
// 
//输入：digits = "23"
//输出：["ad","ae","af","bd","be","bf","cd","ce","cf"]
// 
//
// 示例 2： 
//
// 
//输入：digits = ""
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：digits = "2"
//输出：["a","b","c"]
// 
//
// 
//
// 提示： 
//
// 
// 0 <= digits.length <= 4 
// digits[i] 是范围 ['2', '9'] 的一个数字。 
// 
//
// Related Topics 哈希表 字符串 回溯 👍 2478 👎 0

#include<iostream>
#include<string>
#include<vector>
#include "queue"
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string path="";
    vector<string>res;
    const string letterMap[10] ={
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"

    };
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return res;
        backTracking(digits,0);
        return res;



    }
    void backTracking(string& digits,int startIndex){
        if(path.size()==digits.size())
        {
            res.push_back(path);//设置递归的返回条件
            return;
        }
        string temp=letterMap[digits[startIndex]-'0'];
        for(int i=0;i<temp.size();i++)
        {
            path.push_back(temp[i]);
            backTracking(digits,startIndex+1);
            path.pop_back();//回溯到上一层
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
int main(){
    Solution s;
    auto a=s.letterCombinations("23");
    for(auto item:a)cout<<item<<' ';cout<<endl;
    return 0;
}