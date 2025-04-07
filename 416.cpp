#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*73/144 failed at testcase {2,2,1,1}*/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if (nums.size() == 1) {return false;}

        int sum1 = 0, sum2 = 0;

        sort(nums.begin(), nums.end());

        for (const int& num : nums){
            sum1 += num;
        }

        for (int i = nums.size()-1; i >= 0; i--){
            int num = nums[i];

            nums.pop_back();
            sum2 += num;
            sum1 -= num;

            if (sum2 == sum1 || sum2 > sum1) {break;}
        }
        

        return (sum2 == sum1);
    }
};

int main(){
    vector<int> nums = {2,2,1,1};
    Solution mySolution;

    cout << ((mySolution.canPartition(nums) == 0) ? "false" : "true") << endl;
    return -1;
}