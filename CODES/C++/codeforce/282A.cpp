#include<iostream>

using namespace std;

int main(){
    int x=0,n;
    cin>>n;
    string str[n];

    for (int i = 0; i < n; i++)
    {
      cin>>str[i];
      if (str[i]=="X++"||str[i]=="++X")
      {
       x++;
      }
      if (str[i]=="X--"||str[i]=="--X")
      {
       x--;
      }
       
    }
    cout<<x;
 
}
