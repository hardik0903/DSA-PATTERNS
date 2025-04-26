#include <iostream>

using namespace std;

/*Pattern Goal

    A B C D E
    A B C D
    A B C
    A B
    A
    
*/

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
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
        pattern15(n);
    }
return 0;
}