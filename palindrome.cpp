#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Rows."<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=(n-i); j++){
            cout<<" ";
        }
        int sum1 = i;
        for(int j=1; j<=i; j++){
            cout<<sum1;
            sum1--;
        }
        int sum2 = 2;
        for(int j=2; j<=i; j++){
            cout<<sum2;
            sum2++;
        }
        cout<<endl;
    }
    return 0;
}