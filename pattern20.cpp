#include <iostream>

using namespace std;

/*Pattern Goal

    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    
*/

void pattern20(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;

        for(int j=0;j<=stars;j++){
            cout<<"*";
        }

        for(int j=0;j<=space;j++){
            cout<<" ";
        }

        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
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
        pattern20(n);
    }
return 0;
}