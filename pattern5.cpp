#include <iostream>

using namespace std;

/*Pattern Goal

    * * * * *
    * * * *
    * * *
    * *
    *  
    
*/

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"* ";
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
        pattern5(n);
    }
return 0;
}