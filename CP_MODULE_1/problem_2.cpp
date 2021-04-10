#include <iostream>
using namespace std;
int main(){
    int num1=0;
    int num2=0;
    cout<<"Enter two integers in increasing order with space between them: ";
    cin>>num1>>num2;
    int i{0};
string name[]{"one","two","three","four","five","six","seven","eight","nine"};
for(i=num1;i<=num2;i++){
    if(i<=9)
        cout<<name[i-1]<<endl;
    else if(i%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
}
    

}

