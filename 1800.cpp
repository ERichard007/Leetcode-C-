#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = 0;
        int highestSum = sum;

        if (nums.size() == 1){return nums[0];}

        for (int i = 0; i<nums.size(); i++){
            if (i+1 != nums.size() && nums[i] < nums[i+1]){
                sum += nums[i];
                highestSum = highestSum<sum ? sum : highestSum;
            }else{
                sum += nums[i];
                highestSum = highestSum<sum ? sum : highestSum;
                sum = 0;
            }
        }
        return highestSum;
    }
};

int main(){
    Solution solution;

    vector<int> myVector = {5,5,6,6,6,9,1,2};
    int solve = solution.maxAscendingSum(myVector);

    cout << solve << endl;

    return -1;
}