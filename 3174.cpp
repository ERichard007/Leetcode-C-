#include <iostream>
using namespace std;


class Solution {
    public:
        string clearDigits(string s) {
            for (int i = 0; i < s.length(); i++){
                if(isdigit(s[i])){
                    s.erase(i, 1);
                    if (i != 0){s.erase(i-1, 1);}
                    return clearDigits(s);
                }else{
                    continue;
                }
            }
            return s;
        }
    };

int main(){
    Solution mySolution;
    cout << mySolution.clearDigits("4b82hg8df9fds0") << endl;

    return 0;
}
