#include<iostream>
using namespace std;

int main(){
    int n,sum = 1;
    cout<<"how many rows you want to print: ";
    cin>>n;
    cout<<endl;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;
    }
    return 0;
}