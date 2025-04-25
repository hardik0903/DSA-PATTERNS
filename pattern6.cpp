#include <iostream>

using namespace std;

/*Pattern Goal

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    
*/

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<i;
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
        pattern6(n);
    }
return 0;
}