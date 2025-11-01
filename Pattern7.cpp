/*
Problem --> print the pattern   *                pattern like space   star   space
                               ***                              4      1      4
                              *****                             3      3      3      
                             *******                            2      5      2
                            *********                           1      7      1
                                                                0      9      0
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
int main()
{
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print7(n);
    return 0;


}
