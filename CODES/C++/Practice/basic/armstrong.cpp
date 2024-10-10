#include<iostream>
#include<math.h>
using namespace std;

int main (){
    cout<<"Enter Number :";
    int n;
    cin>>n;
    int OrgN =n;
    int sum=0;

while (n!=0){
    int lastdigit=n%10;
    sum = sum+ pow(lastdigit,3);
    n=n/10;
}

if (sum==OrgN){
    cout<<"Armstrong Number detected "<<endl;}
else 
    cout<<"No Armstrong Number detected "<<endl;
}