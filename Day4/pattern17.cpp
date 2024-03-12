/*
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5;   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        int breakpoint = (2*i+1)/2;
        char ch = 'A';
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}