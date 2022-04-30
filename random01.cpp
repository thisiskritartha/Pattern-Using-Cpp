//Q9. Printing Randomly 0's and 1's in random Position.
//Logic:-> When we add the rows and Column Position and get the even value, we print 1 else 0.
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Rows."<<endl;
    cin>>n;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}