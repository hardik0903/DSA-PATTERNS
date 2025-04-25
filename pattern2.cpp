#include <iostream>

using namespace std;

/*Pattern Goal

    * 
    * * 
    * * *  
    * * * * 
    
*/

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
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
        pattern2(n);
    }
return 0;
}