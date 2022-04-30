#include<iostream>

using namespace std;

int main(){
    int n = 4;

    //for upper half
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        //spaces //Arthmetic formula for common difference a+(n-1)d
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }



    //for lower half
     for(int i=1; i<=n; i++){
        for(int j=4; j>=i; j--){
            cout<<"*";
        }
        //spaces
        int space = 2*i - n/2;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
                for(int j=4; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}




//Without using the space concept
// int main(){
//     int n = 8;
//     for(int i=1; i<=4; i++){
//         for(int j=1; j<=4; j++){
//             if(i>=j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         for(int j=4; j>=1; j--){
//             if(i>=j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//      for(int i=1; i<=4; i++){
//        for(int j=4; j>=1; j--){
//            if(j>=i){
//                cout<<"*";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//               for(int j=1; j<=4; j++){
//            if(i<=j){
//                cout<<"*";
//            }
//            else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//     return 0;
// }