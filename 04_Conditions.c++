#include<iostream>
using namespace std;

int main(){
    /*
    int n;
     cin>>n; // Cin is used for input taking  
     cout<< "Value of n is: " << n <<endl; // here the value of  'n' is getting stored in the form of integer.

    int a;
    cin>>a;

    if(a>0){ // if a is positive 
        cout<<"The number A is positive."<<endl;
    }
    else{
        cout <<"The number A is negative." <<endl;
    }
    
    
    int a,b;
    //cin>> a >>b;
    a = cin.get(); // it is taking characters
    // a = '1' -> 49 ASCII value 

    //cout<< "The value of A and B is: " <<a <<" " << b <<endl;

    cout<< "Value of a is: "<< a <<endl; //output - 1 2 -> '49'


    int a,b;
    cout<<"Enter the value A : "<<endl;
    cin>>a;
    cout<<"Enter the value B : "<<endl;
    cin>>b;

    if(a>b){
        cout<<"A is greater." <<endl;
    }
    if(b>a){
        cout<<"B is greater." <<endl;
    }
    */

    int a;
    cout<<"Enter the value A : "<<endl;
    cin>>a;

    // if(a>0){
    //     cout<<"The number A is positive."<<endl;
    // }
    // else{
    //     if(a<0){
    //         cout<<"The number A is negative."<<endl;
    //     }
    //     else{
    //         cout<< "The number is Zero."<<endl;
    //     }
    // }

    if(a>0){
        cout<<"The number A is positive."<<endl;
    }
    else if(a<0){
        cout<<"The number A is negative."<<endl;
    }
    else{
        cout<< "A is zero."<<endl;
    }
}