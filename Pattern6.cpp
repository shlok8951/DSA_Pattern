/*
Problem --> print the pattern 12345
                              1234
                              123
                              12
                              1
        */
 #include<iostream>
 using namespace std;
 void print6(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
 }      
 int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print6(n);
    return 0;
 }