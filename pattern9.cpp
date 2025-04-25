#include <iostream>

using namespace std;

/*Pattern Goal

        *    
       ***   
      *****  
     *******
    *********
    *********
     *******
      *****
       ***
        *    

*/

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=(n-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        for(int j=1;j<=(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int t;
    cout<<"Enter Number of Test Cases: ";
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cout<<"Enter 'n' Value: ";
        cin>>n;
        pattern7(n);
        pattern8(n);
    }
return 0;
}