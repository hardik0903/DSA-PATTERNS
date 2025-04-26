#include <iostream>

using namespace std;

/*Pattern Goal

    **********
    ****  ****
    ***    ***
    **      **
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    
*/

void pattern19(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        for(int j=0;j<=iniS;j++){
            cout<<" ";
        }

        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }

    iniS=8;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=iniS;j>=0;j--){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
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
        pattern19(n);
    }
return 0;
}