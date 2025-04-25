#include <iostream>

using namespace std;

/*Pattern Goal

    1 
    1 2
    1 2 3
    1 2 3 4
    
*/

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
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
        pattern3(n);
    }
return 0;
}