#include<iostream>
using namespace std;

int main(){
    int t,l,c,temp;
    cout<<"how many test cases you want: ";
    cin>>t;
    cout<<endl;
    temp=1;
    
    for(int i=1; i<=t; i++){
        cout<<"how many lines and column you want: ";
        cin>>l>>c;
        cout<<endl;
        for(int row=1; row<=l; row++){
            for(int col=1; col<=c; col++){
                if(temp==1){
                cout<<"*";
                }
                else{
                cout<<".";
                }
                temp *= -1;
            }
            cout<<endl;
            if(c%2==0){
                temp*=-1;
            }
        }
    }
    return 0;
}