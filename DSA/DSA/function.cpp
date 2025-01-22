#include<iostream>
using namespace std;
int iseven(int num){
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin >> num;
    if(iseven(num)){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    return 0;
}