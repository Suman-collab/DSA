#include <iostream>
using namespace std;

int main()
{
  int n=5;
  for(int i=0;i<n;i++){
    if(i<3){
      int space=n-i;
    for(int j=0;j<=space;j++){
      cout<<" ";
    }
    for(int k=0;k<2*i+1;k++){
      cout<<"*";
    }
    cout<<endl;
    }
    else{
      int space=i+1;
    for(int j=0;j<=space;j++){
      cout<<" ";
    }
    for(int k=0;k<2*(n-i-1)+1;k++){
      cout<<"*";
    }
    cout<<endl;
    }
  }
  return 0;
}