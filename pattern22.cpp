#include <iostream>

using namespace std;

/*Pattern Goal

    4444444
    4333334
    4322234
    4321234
    4322234
    4333334
    4444444
    
*/

void pattern22(int n){
    
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;

            cout<<(n-min(min(right,left),min(top,bottom)));
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
        pattern22(n);
    }
return 0;
}