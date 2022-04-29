#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of terms."<<endl;
    cin>>n;
    int sum=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i>=j){
                cout<<sum;
                sum++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}