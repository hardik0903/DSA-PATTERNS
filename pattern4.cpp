#include <iostream>

using namespace std;

/*Pattern Goal

    1 
    2 2
    3 3 3
    4 4 4 4
    
*/

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
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
        pattern4(n);
    }
return 0;
}