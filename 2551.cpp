#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
    public:
        long long putMarbles(vector<int>& weights, int k) {
            if (weights.size() == k) {return 0;}

            priority_queue<int> maxHeap;
            priority_queue<int, vector<int>, greater<int>> minHeap;

            for (int i = 0; i < weights.size() - 1; i++){
                maxHeap.push(weights[i] + weights[i+1]);
                minHeap.push(weights[i] + weights[i+1]);
            }

            long long maxSum = 0;
            long long minSum = 0;
            for (int i = 0; i < k - 1; i++){
                maxSum += maxHeap.top();
                minSum += minHeap.top();

                maxHeap.pop();
                minHeap.pop();
            }
            
            return (maxSum - minSum);
        }
    };

int main(){
    vector<int> weights = {1,4,2,5,2};
    int k = 3;

    Solution mySolution;
    cout << mySolution.putMarbles(weights, k) << endl;
}

/*
TESTCASES

[1,3,5,1]
1
[1000000000,1000000000,1000000000,1000000000]
3
[1,4,2,5,2]
3
[24,16,62,27,8,3,70,55,13,34,9,29,10]
11
[68,65,5,74,12,67,10,55,27,38,69,54,62,50,30,3,1,24,39,65,73,33,43,9,64]
9

*/