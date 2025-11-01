/* 
  Problem --> print the pattern 1
                                22
                                333
                                4444
                                55555

*/
#include<iostream>
using namespace std;
void print4(int n){
    for(int i = 1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    print4(n);
    return 0;
}