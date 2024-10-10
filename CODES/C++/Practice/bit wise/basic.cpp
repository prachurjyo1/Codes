#include<iostream>
using namespace std;

int main(){
    //bit wise 
    int a,b;
    cout<<"ENter A :"<<endl;
    cin>>a;
    cout<<"ENter B :"<<endl;
    cin>>b;

    /*Eikhene A k 32 bit binary te convert 
    and B keo same kore TT onujayee oparation hobe
    */

    cout<<"A&b : "<<(a&b)<<endl;
     cout<<"A|b : "<<(a|b)<<endl;
      cout<<"~A : "<<(~a)<<endl;
       cout<<"~B : "<<(~b)<<endl;
        cout<<"A^b : "<<(a^b)<<endl;
         cout<<"End"<<endl;

    cout<<" 2 left shift of A (A<<2)"<<(a<<2)<<endl;
    cout<<" 1 left shift of B (B<<1)"<<(b<<1)<<endl; 
    cout<<" 2 Right shift of A (A>>2)"<<(a>>2)<<endl; 
    cout<<" 1 Right shift of A (B>>1)"<<(b>>1)<<endl;  
      cout<<"\n\tEnd"<<endl<<endl<<endl;

    int x,y=1;
    x=10;
    if (++x){
        cout<<y;
    } else cout<< ++y;





}