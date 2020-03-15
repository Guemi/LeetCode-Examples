class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Method
        vector<int> positions {};
        for(int i{};i<nums.size();i++){
            //cout<<nums[i]<<endl;
            for(int j{};j<nums.size();j++){
                if(nums[j] == target - nums[i]){
                    positions.push_back(i);
                    positions.push_back(j);
                    cout<<i<<" - "<<j<<endl;
                    //break;   
                    return positions;
                }
                
            }
        }
        //return nums;
        return positions;
    }
};
/*
#include <iostream>
int main() {
    int N,i=0;
    std::cin>>N;
    int *A = new int[N];
    while(std::cin>>A[i++]);
    while(std::cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}


string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> A = stringToIntegerVector(line);
        
        bool ret = Solution().validMountainArray(A);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}

*/