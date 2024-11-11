#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";  // Added prompt for input
    cin >> n;
/*
// Decimal to BInary 


    float ans = 0;
    int i = 0;

//NOTE: This code logic is wrong for decimal Number - 5,4 

    while (n != 0) {
        int bit = n & 1;  // Get the least significant bit
        ans = (bit * pow(10, i)) + ans;  // Add the bit at the 10^i place
        n = n >> 1;  // Right shift n to process the next bit
        i++;  // Increment position
    }

    cout << "Answer is " << ans << endl;



//NOTE: This the new way of logic of above code


    int ans = 0;
    int place = 1;  // Place value in binary (1, 10, 100, ...)

    while (n != 0) {
        int bit = n & 1;  // Get the least significant bit
        ans = (bit * place) + ans;  // Add the bit at the correct place value
        place *= 10;  // Move to the next place value in binary
        n = n >> 1;  // Right shift n to process the next bit
    }

    cout << "Binary representation is: " << ans << endl;
*/


// BINARY TO DECIMAL
    
    int i=0;
    float ans = 0;
    while(n != 0){

        float digit = n %10; //main logic
        if(digit==1){
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout<< ans << endl;


}
