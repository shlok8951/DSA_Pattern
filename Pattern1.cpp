/* 
problem --> print the pattern like ****
                                   ****
                                   ****
                                   **** 
in this case no symmetrycal observation has to be done.                                   
*/
#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){
        cout<<"*";
    }
    cout<<endl;
 }

}
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
  print(n);
}