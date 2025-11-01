/*
Problem --> print the pattern  A
                               B B 
                               C C C
                               D D D D 
                               E E E E E   
*/
#include<iostream>
using namespace std;
void print16(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j = 0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print16(n);
    return 0;
}