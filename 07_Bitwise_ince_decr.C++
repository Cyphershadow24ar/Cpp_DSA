#include<iostream>
using namespace std;
int main(){

//Bitwise Operators

    int a = 4;
    int b = 6;

    cout<< "a&b" << (a&b) <<endl; //AND
    cout<< "a|b" << (a|b) <<endl; // OR
    cout<< "~a" << (~a) <<endl; //NOT
    cout<< "a^b" << (a^b) <<endl; // XOR

    cout<< (17>>1) << endl;
    cout<< (17>>2) << endl;
    cout<< (19<<1) << endl;
    cout<< (21<<2) << endl;

    int i =7; 
    cout<< (++i) <<endl;
    cout<< (i++) <<endl;
    cout<< (i--) <<endl;
    cout<< (--i) <<endl;
}