#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int largestSub = 0;
        vector<int> subArray; 

        if (arr.size() >= 3){
            int start = 0;
            int curr = 1;

            
        }else{
            return 0;
        }

    }
};

int maint(){               
    Solution mySolution;    // 1 2 3 5 8 = 5
    vector<int> myArray = {1,2,3,4,5,6,7,8}; 
    cout << mySolution.lenLongestFibSubseq(myArray) << endl;
}