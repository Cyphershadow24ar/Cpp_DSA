#include<iostream>
using namespace std;

int main(){
    
    int a= 123; // int
    cout<< a <<endl;

    char b ='v'; //characters
    cout<< b <<endl;

    bool bl = true; // bool true 1 and false 0
    cout<< bl <<endl;

    float f =1.2; // float mtlb in points
    cout<< f <<endl;

    double d =1.23; // double 
    cout<< d <<endl;

    int size = sizeof(a);  // to check the size of the data 
    int size2 = sizeof(d); 
    cout<< "Size of a is :" << size << endl;
    cout<< "Size of d is :" << size2 << endl;

    int e = 'a'; // 'a' typecast got converted into characters
    cout<< e << endl;

    char ch =98; // '98' type-casted into 'b'
    cout<< ch <<endl;

    char ch1= 123456; // last portion of your bit is showing '64' what's why '@' is getting print.
    cout<< ch1 <<endl;
    
    unsigned int g =112; //unsigned - we using this for only +ve value
    cout<< g <<endl;

}