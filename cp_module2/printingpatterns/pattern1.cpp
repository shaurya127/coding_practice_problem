#include <iostream>

using namespace std;
void patrn(int n)
{
    int num=1;
    for(int i=0;i<n;i++)
    {
      if(i%2==0 && i!=0){
         for(int j=0;j<=i;j++)
          {cout<<num+2<<" ";
           num=num-1;}
        num=num+i+4;
        cout<<endl;
           
      }else{  
        for(int j=0;j<=i;j++)
          {cout<<num<<" ";
           num=num+1;}
           if(i!=0)
            num=num+i-1;
         cout<<endl; 
      }
    }
    int main(){
    int n;
    cout<<"Enter any no. of your choice:";
    cin>>n;
    patrn(n);
    return 0;
}
