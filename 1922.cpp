#include <iostream>
#include <cmath>
using namespace std;
class Solution {
    public:
        int countGoodNumbers(long long n) {
            if (n%2==0){
                return((modExp(5,n/2)*modExp(4,n/2))%MODULO);
            }else{
                return((modExp(5,floor((n/2)+1))*modExp(4,floor(n/2))%MODULO));
            }
        }
    private:
        const int MODULO = 1000000007;

        long long modExp(long long base, long long exp){
            long long res = 1;
            base = base % MODULO;
            while (exp > 0){
                if (exp%2==1) {res = (res * base) % MODULO;}
                base = (base * base) % MODULO;
                exp /= 2;
            }
            return res;
        }
    };

int main(){
    Solution mySolution;
    long long length = 3;

    cout << mySolution.countGoodNumbers(length) << endl;

    return -1;
}