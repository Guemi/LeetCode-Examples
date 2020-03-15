//Git Example
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int i {0}, n = A.size()-1;
        if(A.size() >= 3 && A[0] < A[1] && A[n] < A[n-1]){
            // cout<<"Last item at: "<<n<<endl;
            while(A[i+1] > A[i]){
                cout<<A[i+1]<<" > "<<A[i]<<" para i = "<<i<<endl;
                ++i;
                if(i == n)break;
            }
            while(A[i+1] < A[i]){
                cout<<A[i+1]<<" < "<<A[i]<<" para i = "<<i<<endl;
                ++i;
                if(i == n)break;
            }
            // cout<<i<<endl;
            if(i == n) return true;
        }
        return false;
    }
};
string boolToString(bool input) {
    return input ? "True" : "False";
}

int main(){
    // int valor_in {}, i{};
    // string str {};
    Solution s1;
    vector<int> in_test = {1,3,2};//{10,30,60,105,10};//{0,1,3,1,4,1};

    // cout<<"In value -> ";
    // cin>>valor_in;
    cout<<boolToString(s1.validMountainArray(in_test));
    return 0;
}
