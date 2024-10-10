#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n;
    cout<<"enter num :"<<endl;
    cin>>n;
    bool prime =0;
    for (int i =0;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            prime=1;
            break;
        }
    }
    if (prime==0){
        cout<<"prime"<<endl;
    }
}