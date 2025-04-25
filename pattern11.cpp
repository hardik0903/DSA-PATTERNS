#include <iostream>

using namespace std;

/*Pattern Goal

    1
    01
    101
    0101
    10101 

*/

void pattern11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
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
        pattern11(n);
    }
return 0;
}