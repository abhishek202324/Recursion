#include<iostream>
using namespace std;
int sumOfNaturalNumber(int n){
    if(n==0) return 0;
    return n+sumOfNaturalNumber(n-1);
}
int main(){
    int sum=sumOfNaturalNumber(10);
    cout<<sum<<endl;
}
