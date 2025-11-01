/*
 Problem --> print the pattern       *
                                    ***
                                   *****
                                  *******
                                 *********
                                 *********
                                  *******
                                   *****
                                    ***
                                     *  


 */

 
#include<iostream>
using namespace std;
void print7(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=2*n-1;j++){
            if(j<=n-i||j>=n+i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<=2*n-1;j++){
            if(j<=n-i||j>=n+i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print7(n);
    print8(n);
    return 0;


}
