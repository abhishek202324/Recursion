#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int result=fib(8);
    cout<<result;
    return 0;
    
}
