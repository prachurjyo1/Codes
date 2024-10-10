#include<iostream>
using namespace std;

int main(){

cout<<"When to end :"<<endl;
int count;
cin>>count;
 cout<<"\t\n series: "<<endl;
 int a=0,b=1;
    cout<<" "<<a<<endl<<" "<<b<<endl;
for (int i = 1; i <= count; i++)
{
    int next = a+b;
    cout<<" "<<next<<endl;
   a=b;b=next;
    
    

}



}