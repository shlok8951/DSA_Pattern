/*
  Problem --> print thr pattern *****
                                ****
                                ***
                                **
                                *
                                
  */
 #include<iostream>
 using namespace std;
 void print5(int n){
    for(int i = n;i>0;i--){
        for(int j = 0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }
 int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    print5(n);
 }