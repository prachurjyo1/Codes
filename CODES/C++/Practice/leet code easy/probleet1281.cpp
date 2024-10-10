#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum=0,prod=1;

    while (n!=0)
    {
       int rem=(n%10);
       sum=sum+rem;
       prod=prod*rem;
       n=n/10; 
    }
  
   cout<<"Result "<<(prod-sum)<<endl;

    //   int Result = (prod-sum);

    // return Result;
    

} 