#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
            const int MOD = 1e9 + 7;
            int numOfOddSums = 0, prefixSum = 0, evens = 1, odds = 0;
            for (const int& num : arr){
                prefixSum += num;
                if (prefixSum % 2 != 0){
                    odds += 1;
                    numOfOddSums += evens;
                }else{
                    evens += 1;
                    numOfOddSums += odds;
                }
                numOfOddSums %= MOD;
            }
            return (numOfOddSums);
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

    cout << mySolution.numOfSubarrays(myArray) << endl;
    return -1;
}