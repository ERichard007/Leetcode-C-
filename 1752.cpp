#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int num_possible_turns = nums.size()-1;

        for (int i = num_possible_turns; i >= 0; i--){
            if (check_sorted(nums)){
                return true;
            }else{
                shift(nums);
            }
        }
        
        return false;
    }

private:
    bool check_sorted(vector<int> nums) {
    for (int i = 0; i<nums.size()-1; i++){
        if (nums[i] <= nums[i+1]){
            continue;
        }else{
            return false;
        }
    }
    return true;
    }

    void shift(vector<int> &nums){
        vector<int> temp_vec = {};

        temp_vec.push_back(nums.back());

        for (int i = 0; i<nums.size()-1; i++){
            temp_vec.push_back(nums[i]);
        }

        nums = temp_vec;
    }

};

int main() {
    Solution solution;
    
    vector<int> myVector = {5,1,2,4};
    bool solve = solution.check(myVector);

    cout << (solve == 0 ? "False" : "True") << endl;

    return -1;
}
