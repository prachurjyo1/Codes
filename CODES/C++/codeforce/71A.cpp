#include<iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    string str[n];
    
      for (int i = 0; i < n; i++)
      {
        
         cin>>str[i];
      
      }

for (int i = 0; i < n; i++)
{
  
        int count = str[i].length();
    if (count>10)
    {
        cout<<str[i][0]<<count-2<<str[i][count-1]<<endl;
    }
    else cout<<str[i]<<endl;
}


    
 
}