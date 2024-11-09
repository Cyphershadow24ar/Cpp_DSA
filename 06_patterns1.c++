#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    //int i =1; // start from row 1

    /* 
    NOTE: Pattern 1
    while(i<=n){ 
        int j =1;
        while(j<=n){
            cout<< "*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    output - depends upon user input.
    }
    
    NOTE: Pattern 2
    while(i<=n){ // row i is -> n tak
        int j =1;
        while(j<=n){ 
            cout<< i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    */
    
    // NOTE: Pattern 3
    // int row =1;
    // int count =1;
    // while(row<=n){
    //     int col =1;
    //     while(col <=row){
    //         cout<< count<<" ";
    //         count = count+1;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    // }
    
    // NOTE: Pattern 4
    // int row =1;
    // while(row<=n){
    //     int col =1;\
    //     int value = row;
    //     while(col <=row){
    //         cout<< value <<" ";
    //         value  = value +1;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    // }

    //NOTE: Pattern 5
    // int i= 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<j ;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i= i+1;
    // }

    //NOTE: Pattern 6
    // int i= 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i= i+1;
    // }

    //NOTE: Pattern 7
    // int i =1;
    // int count= 1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count = count + 1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    //NOTE: Pattern 8
    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<"*";
    //         col = col+1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    //NOTE: Pattern 9
    // int row =1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=row){
    //         cout<<row;
    //         col =col +1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    //NOTE: Pattern 10
    // int row =1;
    // int count =1;
    // while(row <=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<count<<" ";
    //         count = count + 1;
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
    // }

    //NOTE: Pattern 11
    // int row = 1;
    // while(row<=n){
    //     int col=1;
    //     int value =row;
    //     while(col<=row){
    //         cout<<value<<" ";
    //         value = value+1;
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    //NOTE:Pattern 12
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<(i-j+1)<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    //NOTE: Pattern 13
    // int row =1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char ch ='A'+row-1;
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
    // }

    //NOTE: Pattern 14
    // int row =1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char ch ='A'+col-1;
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
    // }

    //NOTE: Pattern 15
    // int row =1;
    // char start ='A';
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         cout<<start<<" ";
    //         start =start + 1;
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
    // }

    //NOTE: Pattern 16
    // int row =1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=n){
    //         char ch='A'+row+col-2;
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row +1;
    // }

    //NOTE: Pattern 17
    // int row=1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=row){
    //         char ch=('A'+row-1);
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    //NOTE: Pattern 18
    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         char ch=('A'+row-1);
    //         cout<<ch<<" ";
    //         col = col+1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    // NOTE: Pattern 19
    // int row=1;
    // char start ='A';
    // while(row<=n){
    //     int col =1;
    //     while(col<=row){
    //         cout<<start<<" ";
    //         start = start +1;
    //         col = col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }
    
    //NOTE: Pattern 20
    // int row=1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=row){
    //         char ch=('A'+row+col-2);
    //         cout<<ch<<" ";
    //         col = col +1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    //NOTE: Pattern 21 
    // int row =1;
    // while(row<=n){
    //     int col =1;
    //     char start = 'A' + n-row;
    //     while(col<=row){
    //         cout<<start<<" ";
    //         start = start + 1;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    // }

    //NOTE: Pattern 22
    // int row =1;
    // while(row<=n){
    //     //space ka liya 
    //     int space = n-row;
    //     while(space){
    //         cout<<" ";
    //         space = space-1;
    //     }
        
    //     //star ka liya
    //     int col=1;
    //     while(col <=row){
    //         cout<<"*";
    //         col =col+1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    //NOTE: Pattern 23
    // int row =n;
    // while(row>0){
    //     //star ka liya
    //     int col=1;
    //     while(col <=row){
    //         cout<<"*";
    //         col =col+1;
    //     }
    //     cout<<endl;
    //     row = row-1;
    // }

    //NOTE: Pattern 24;
    // int row =1;
    // while(row<=n){
    //     //space ka liya 
    //     int space = row-1;
    //     while(space > 0){
    //         cout<<" ";
    //         space = space-1;
    //     }
    //     //star ka liya
    //     int col=1;
    //     while(col <=(n-row+1)){
    //         cout<<"*";
    //         col =col+1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }

    // NOTE: Pattern 25;
    // int row =1;
    // while(row<=n){
    //     //space ka 1st triangle
    //     int space = n-row;
    //     while(space){
    //         cout<<" ";
    //         space = space-1;
    //     }
    //     // 2nd Triangle
    //     int j=1;
    //     while(j<=row){
    //         cout<<j;
    //         j=j+1;
    //     }
    //     // 3rd Triangle
    //     int start = row-1;
    //     while(start){
    //         cout<<start;
    //         start = start-1;
    //     }
    //     cout<<endl;
    //     row = row+1;
    // }


}