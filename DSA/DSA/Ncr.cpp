#include<iostream>
using namespace std;
int fact(int num){
    if(num==0)
    return 1;
    else
    return num*fact(num-1);
}
int NCR(int n,int r){
    if(r==0)
    return 1;
    if(n==0)
    return 1;
    else{
        return fact(n)/(fact(r)*fact(n-r));
    }
}
int main(){
    int n;
    int r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<NCR(n,r);
    return 0;
}