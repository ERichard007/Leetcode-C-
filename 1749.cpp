#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int maxSum = nums[0];
            int resSum = nums[0];
            for (int i = 1; i < nums.size(); i++){
                maxSum = max(maxSum + nums[i], nums[i]);
                resSum = max(maxSum, resSum);
            }

            int minSum = nums[0];
            int resSum2 = nums[0];
            for (int i = 1; i < nums.size(); i++){
                minSum = min(minSum + nums[i], nums[i]);
                resSum2 = min(minSum, resSum2);
            }

            return max(resSum, abs(resSum2));
        }
    };

int main(){
    Solution mySolution;
    vector<int> myArray;

    string line;
    getline(cin, line);
    stringstream ss(line);

    int num;
    while (ss >> num){
        myArray.push_back(num);
    }

    cout << mySolution.maxAbsoluteSum(myArray) << endl;
    return -1;
}