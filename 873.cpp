#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int maxSubarray = 0;
        
        int size = arr.size();
        unordered_set<int> numSet(arr.begin(), arr.end());

        for (int start = 0; start < size; ++start){
            for (int next = start + 1; next < size; next++){
                int prev = arr[next];
                int curr = arr[start] + arr[next];
                int len = 2;

                while (numSet.find(curr) != numSet.end())
                {
                    int temp = curr;
                    curr += prev;
                    prev = temp;
                    maxSubarray = max(maxSubarray, ++len);
                }
                
            }
        }
        return maxSubarray;
    }
};

int main(){               
    Solution mySolution;    // 1 2 3 5 8 = 5
    vector<int> myArray = {1,3,7,11,12,14,18}; 
    cout << mySolution.lenLongestFibSubseq(myArray) << endl;
}