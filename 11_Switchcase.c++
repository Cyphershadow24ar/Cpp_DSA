// Switch Case

#include<iostream>
using namespace std;

int main(){
    /* int num =2;
    
    cout<< endl;
    switch( num ){
        case 1: cout<< "first" <<endl;
                break;
        case 2: cout<< "Second" <<endl;
                break;
        default: cout<< "It id default case "<<endl;
    }
    */
    
    char ch = '1';

    cout<<endl;
    switch(ch){
        case 1: cout<< "First"<<endl;
                break;
        case '1': cout<< "Character one" <<endl;
                break;
        default: cout<< "It is default case " <<endl;
    }

    cout<<endl;

    return 0;
} 