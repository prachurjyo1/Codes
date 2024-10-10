#include<iostream>
#include<math.h>
using namespace std;

int main(){

    cout <<"Enter Binary Num "<<endl;
    int n;
    cin>>n;
    int ans =0;
    int i=0;
    
    while (n!=0)
    {
       int digit = n%10;
       if (digit==1){
       ans = digit*pow(2,i)+ans;}
      
       n=n/10;
       i++;
    }
    /*jodi digit na ber kore kortam
    tahole bit er jonne bit = n&1 kortam 
    tar sathe n=n>>1 kortam n/10 na kore*/

    cout <<"In Decimal "<<ans<<endl;


}