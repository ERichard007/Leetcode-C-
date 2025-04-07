#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*Knapsack problem logic with 0/1*/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if (nums.size() == 1) {return false;}

        int sum = 0, targetSum = 0;

        for (const int& num : nums){
            sum += num;
        }

        if (sum % 2 != 0) {return false;}

        targetSum = sum/2;

        vector<int> sums(targetSum+1, 0);
        sums[0] = 1;

        for (const int& num : nums){
            for (int i = targetSum; i >= num; i--){
                sums[i] = sums[i] || sums[i-num];
            }
        }
        
        for (const int& num : sums){
            cout << num << endl;
        }
        


        return (sums[targetSum]);
    }
};

int main(){
    vector<int> nums = {2,2,1,1};
    Solution mySolution;

    cout << ((mySolution.canPartition(nums) == 0) ? "false" : "true") << endl;
    return -1;
}