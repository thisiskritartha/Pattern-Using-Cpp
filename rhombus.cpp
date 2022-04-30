#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Rows."<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=(5-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}