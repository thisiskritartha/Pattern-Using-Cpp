#include<iostream>

using namespace std;

int main(){
    int row, column;
    cout<<"Enter the number of rows."<<endl;
    cin>>row;
    cout<<"Enter the number of column."<<endl;
    cin>>column;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            if(i==1 || i==row){
                cout<<"*\t";
            }
            else{
                if(j==1 || j==column){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}