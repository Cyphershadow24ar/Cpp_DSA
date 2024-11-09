#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    /*
    int i =1;
    
    while(i<=n){ //condition
        cout<<i<<" "; // print 
        i = i+1; // updating value of a.
    }
    
    int i =1;
    int sum =0 ;
    while(i<=n){ //condition
        sum = sum + i ;
        i = i+1;
    } 

    cout<<"Value of sum is "<<sum<<endl;
    */ 
    
    int i =2;
    while(i<n){
        if(n%i==0){ //condition
        cout<<"Not prime for"<< i <<endl;
        }
        else{
            cout<<"Prime for "<<i <<endl;
        }
    i = i+1;
    }
}