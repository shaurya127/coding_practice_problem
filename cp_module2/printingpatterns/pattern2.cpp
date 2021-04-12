#include <iostream>

using namespace std;
void chesbrd(int I, int C)
{
    int i=0,j=0;
    while(i<I)
    {
        if(i%2==0)
        {
          while(j<C)
          {
            if(j%2==0){
              cout<<"*";
              j++;}
            else{
              cout<<".";
               j++;}
           }
           j=0;
           i++;
           cout<<endl; 
           
         } else{
             while(j<C)
          {
            if(j%2==0){
              cout<<".";
              j++;}
            else{
              cout<<"*";
               j++;}
           }
           j=0;
           i++;
           cout<<endl; 
             
         }
    }
}
int main(){
    int n=0,I=0,C=0,num=0;
    cout<<"Enter no of testcases for chessbord:";
    cin>>n;
    
    while( num<n){
        cout<<"Enter no of lines(I) and no of columns(C):";
       cin>>I>>C;
       chesbrd(I,C);
        num++;}
    
    return 0;
}
