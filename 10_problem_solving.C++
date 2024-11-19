#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

// Question 1

/*
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;
            if((ans > INT_MAX/10)|| (ans < INT_MIN/10)){  //case 2
                return 0;
            }
            ans = (ans * 10) + digit; //case 2
            x = x / 10;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int result = sol.reverse(num);
    cout << "Reversed number: " << result << endl;
    return 0;

}
*/

// Question 2

class solution{
    public:
    int bitwiseComplement(int n){
        int m =1;
        int mask =0;

        //edge case
        if(n == 0)
            return 1;
        
        while(m!=0){
            mask =(mask << 1) |1;
            m = m >> 1;
        }
        int ans =(-n) & mask;
        return ans;
        }

};

int main() {
    solution sol;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int result = sol.bitwiseComplement(num);
    cout << "Bitwise complement: " << result << endl;
    return 0;
}

