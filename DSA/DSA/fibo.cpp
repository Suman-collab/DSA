#include<iostream>
using namespace std;
int fib(int num){
    int a = 0, b = 1;
    int c;
    for(int i=0;i<num;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The nth fibbonaci number is: "<<fib(num-1);
    return 0;
}