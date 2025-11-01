/*
Problem --> print the pattern  1      1
                               12    21
                               123  321
                               12344321
*/
#include<iostream>
using namespace std;
void print12(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j =1;j<2*(n-i);j++){
            cout<<" ";
        }
        for(int j = i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print12(n);
    return 0;
}