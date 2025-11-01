/*
Problem --> parint the pattern   1
                                 0 1
                                 1 0 1
                                 0 1 0 1
                                 1 0 1 0 1
*/

#include<iostream>
using namespace std;
void print11(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(j>i){
                cout<<" ";
            }
            else{
                if((i+j)%2==0){
                    cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print11(n);
    return 0;
}