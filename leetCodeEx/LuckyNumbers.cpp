//Git Example
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size()-1, n = matrix[0].size()-1;
        vector<int> luckyNums = {}, VminNum = {}, VmaxNum {};
        int minNum = matrix[0][0], maxNum = matrix[0][0];

        for(int i {};i <= m; ++i){
            if(matrix[i].size()-1 > n) n = matrix[i].size()-1;
            VminNum.push_back(*min_element(matrix[i].begin(), matrix[i].end())); 
            cout<<*min_element(matrix[i].begin(), matrix[i].end())<<" MIN"<<endl;
        }        
        
        for(int i {};i <= n; ++i){
            maxNum = matrix[0][i];
            for(int j {};j <= (m);++j){
                // cout<<matrix[j][i]<<" ";
                if(matrix[j][i] > maxNum){
                    maxNum = matrix[j][i];
                }
            }
            VmaxNum.push_back(maxNum);
            cout<<maxNum<<" MAX"<<endl;
           
            cout<<endl;
        }
        for(int i {};i <= m; ++i){
            for(int j {};j <= (n);++j){
                if((matrix[i][j] == VmaxNum[j] && matrix[i][j] == VminNum[i])){
                    luckyNums.push_back(matrix[i][j]);
                }
            }
            cout<<endl;
        }        

        return luckyNums;
    }
};
string boolToString(bool input) {
    return input ? "True" : "False";
}

int main(){
    // int valor_in {}, i{};
    // string str {};
    Solution s1;
    vector<vector<int>> nested_vec = {{2,1,3},{6,3,9},{5,0}}; //{{40},{6},{23},{75}};
    vector<int> vec_res {};

    // cout<<"In value -> ";
    // cin>>valor_in;
    vec_res = s1.luckyNumbers(nested_vec);
    
    for(auto x : vec_res){
        cout<<x<<endl;
    }
    
    
    return 0;
}
