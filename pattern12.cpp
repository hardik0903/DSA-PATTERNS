#include <iostream>

using namespace std;

/*Pattern Goal

    1        1
    12      21
    123    321
    1234  4321
    1234554321

*/

void pattern12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        space-=2;
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
        pattern12(n);
    }
return 0;
}