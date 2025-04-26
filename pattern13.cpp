#include <iostream>

using namespace std;

/*Pattern Goal

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

*/

void pattern13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
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
        pattern13(n);
    }
return 0;
}