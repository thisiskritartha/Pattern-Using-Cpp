#include<iostream>

using namespace std;
 
int main(){
    int n;
    cout<<"Enter the number of rows."<<endl;
    cin>>n;
    //UpperHalf
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //UpperHalf
        for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=(i-1); j++){
            cout<<" ";
        }
        for(int j=1; j<=(9-2*i); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}