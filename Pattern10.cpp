/*
Problem -->
print the pattern   *
                    **
                    ***
                    ****
                    *****
                    ****
                    ***
                    **
                    *
*/

#include<iostream>
using namespace std;
void print10(int n){
for(int i=1;i<=2*n-1;i++){
    for(int j = 1;j<=n;j++){
        if(j>i||j>2*n-i){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print10(n);
    return 0;
}