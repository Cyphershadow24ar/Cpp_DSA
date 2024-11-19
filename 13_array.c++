#include<iostream>
#include <climits>
using namespace std;

int getmin(int num[], int n){
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        mini = min(mini, num[i]);
        
    //     if (num[i] < min ) {
    //         min = num[i];
    //     }
    }

    //returning the max value
    return mini;
    
}

int getmax(int num[], int n){
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi , num[i]);
        
        // if (num[i] > max) {
        //     max = num[i];
        // }
    }

    //returning the max value
    return maxi;

}
//HOLD
/*
void print_array(int arr[], int size){
    
    cout<< "Printing the array "<<endl;
    //print the array 
    for(int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<< "Printing Done " << endl;

}
*/

int main(){
/*
    //Declare
    int number[15];

    //accessing an array
    cout<< "Value at 0 index " << number[0] <<endl;

    // cout<< "Value at 20 index " << number[20] <<endl;

    // initialising an array 
    int second[3] = {5,7,11};

    //accessing an element 
    cout<< "Value at 2nd index " << second[2] <<endl;



    // third array 
    int  third[15]= {2,7};
    int n=15;
    //print_array(third,13);
    int thirdSize= sizeof(third)/sizeof(int);
    cout<< "Size of third is " << thirdSize <<endl;
    // int n=15;
    // cout<<"Printing the array"<< endl;

    // // print the array.
    // for(int i=0; i<n ; i++){
    //     cout<<third[i]<<" ";
    // }
    



    //fourth array 
    int fourth[10]={0};  // initialising all location with 0
    n=10;
    //print_array(fourth,10);

    // cout<< "Printing the array "<<endl;

    // //print the array 
    // for(int i=0; i<n ; i++){
    //     cout<<fourth[i]<<" ";
    // }



    //fifth  
    int fifth[10]={1};  // initialising all location with 0
    n=10;
    //print_array(fifth,10);
    // cout<< "Printing the array "<<endl;

    //print the array 
    // for(int i=0; i<n ; i++){
    //     cout<<fifth[i]<<" ";
    // }

    int fifthSize= sizeof(fifth)/sizeof(int);
    cout<< "Size of fifth is " << fifthSize <<endl;

    //character array 
    char ch[5] = {'a','b','c','r','p'};
    cout<<ch[3]<<endl;

    cout<< "Printing the array "<<endl;
    //print the array 
    for(int i=0; i<5; i++){
        cout<<ch[i]<<" ";
    }
    cout<< "Printing Done " << endl;
    double firstDouble[5];
    float firstfloat[6];
    bool firstbool[9];

    cout<< endl <<"Everything is fine " <<endl<<endl;
*/
    int size;
    cin>>size;

    int num[100];
    
    //taking input in array 
    for(int i=0; i<size ; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is " << getmax(num, size) <<endl;
    cout<<"Minimum value is " << getmin(num, size) <<endl;



    return 0;

}


