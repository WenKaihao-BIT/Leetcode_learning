//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。 
//
// 
//
// 示例 1： 
//
// 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
//输出：[1,2,3,6,9,8,7,4,5]
// 
//
// 示例 2： 
//
// 输入：matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
//输出：[1,2,3,4,8,12,11,10,9,5,6,7]
// 
//
// 
//
// 限制： 
//
// 
// 0 <= matrix.length <= 100 
// 0 <= matrix[i].length <= 100 
// 
//
// 注意：本题与主站 54 题相同：https://leetcode-cn.com/problems/spiral-matrix/ 
//
// Related Topics 数组 矩阵 模拟 👍 518 👎 0

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()<1||matrix[0].size()<1)
            return {};
    int rows=matrix.size();
    int columns=matrix[0].size();
//    cout<<rows<<' '<<columns<<endl;
    pair<int,int>start(0,0);
    vector<int>result;
        while (matrix.size()>start.first*2&&matrix[0].size()>start.second*2){
            LoopPrint(matrix,result,rows,columns,start);
            start.first++;start.second++;
            rows-=2;columns-=2;
//            cout<<start.first<<' '<<start.second<<endl;
        }
        return result;
    }
    void LoopPrint(vector<vector<int>>& matrix,vector<int> &result,int rows,int columns,pair<int,int>start){
        //→
        for(int i=start.second;i<start.second+columns;i++){
            result.push_back(matrix[start.first][i]);
            cout<<matrix[start.first][i]<<' ';
        }
        //↓
        for(int i=start.first+1;i<start.first+rows;i++){
            result.push_back(matrix[i][start.second+columns-1]);
            cout<<matrix[i][columns-1]<<' ';
        }

        if(columns>1&&rows>1){
            //←
            for(int i=start.second+columns-2;i>=start.second;i--){
                result.push_back(matrix[start.first+rows-1][i]);
                cout<<matrix[start.first+rows-1][i]<<' ';
            }
            //↑
            for(int i=start.first+rows-2;i>start.first;i--){
                result.push_back(matrix[i][start.second]);
                cout<<matrix[i][start.second]<<' ';
            }
        }



    }
};
//leetcode submit region end(Prohibit modification and deletion)
int main(){
    Solution s;
    vector<vector<int>>matrix;
    vector<int>result;
//    cout<<matrix.size();
    result=s.spiralOrder(matrix);
//    s.LoopPrint(matrix,result,1,2,{1,1});
//    cout<<endl;
//    for(auto item:result)cout<<item<<' ';
    return 0;
}