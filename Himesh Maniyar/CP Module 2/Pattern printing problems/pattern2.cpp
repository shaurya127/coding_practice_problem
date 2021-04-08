#include <iostream>

using namespace std;

int main(){
    int t,l,c;
    cout<<"Enter the test cases: ";
    cin>>t;
    for(int i=0;i<t;++i){
        cout<<"Enter the lines and columns: ";
        cin>>l>>c;
        for(int j=0;j<l;++j){
            for(int k=0;k<c;++k){
                if((j+k)%2==0) cout<<"*";
                else cout<<".";
            }
            cout<<"\n";
        }
    }
    return 0;
}