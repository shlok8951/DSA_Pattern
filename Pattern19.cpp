/*
Problem --> rint the pattern  * * * * * * * * * * 
                              * * * *     * * * *
                              * * *         * * *
                              * *             * * 
                              *                 *
                              *                 *
                              * *             * * 
                              * * *         * * *
                              * * * *     * * * *
                              * * * * * * * * * *
*/
#include<iostream>
using namespace std;
void print19(int n){
    for(int i = 0;i<n;i++){
        for(int j =1;j<=n-i;j++){
            cout<<"*";
        }

        for(int j =0;j<2*i;j++){
            cout<<" ";
        }

        for(int j =1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";

        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print19(n);
    return 0;
}