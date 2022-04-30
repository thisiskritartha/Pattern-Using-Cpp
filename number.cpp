#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Rows."<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        int sum = 1;
        for(int j=1; j<=i; j++){
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;
    }
    return 0;
}