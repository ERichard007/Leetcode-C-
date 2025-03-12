#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int pos = 0;
            int neg = 0;
            for (const int& num : nums){
                if (num > 0) {pos+=1;} 
                else if (num < 0) {neg+=1;}
            }
            return (max(pos, neg));
        }
    };

int main(){
    Solution mySolution;
    vector<int> numbers = {5,20,66,1314};

    cout << mySolution.maximumCount(numbers) << endl;

    return -1;
}