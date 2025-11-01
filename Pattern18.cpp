/* Problem --> print the pattern  E
                                  D E
                                  C D E
                                  B C D E
                                  A B C D E
*/
#include<iostream>
using namespace std;
void print18(int n){
    for(int i=1;i<=n;i++){
        char ch = 'A'+n-i;
        for(int j = 1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;

    }

}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print18(n);
    return 0;
}