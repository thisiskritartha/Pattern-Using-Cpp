#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of *"<<endl;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(i<=j){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}