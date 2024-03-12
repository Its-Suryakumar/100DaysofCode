#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int inis = 2*n - 2;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        inis -=2;
        cout<<endl;
    }    
    //intital spaces = 0
    inis=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        inis +=2;
        cout<<endl;
    }
    return 0;
}