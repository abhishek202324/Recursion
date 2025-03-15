#include<iostream>
using namespace std;
void print1toN(int n,int start=1){
    if(start>n){
        return;//base case..
    }
    cout<<start<<" ";
    print1toN(n,start+1);
}

int main(){
    print1toN(10);
    
}
