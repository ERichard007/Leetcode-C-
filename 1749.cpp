#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            
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