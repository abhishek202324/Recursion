#include<iostream>
using namespace std;
int sumofArray(int arr[],int n){
    if(n==0){
        return 0;

    }
    return arr[n-1]+sumofArray(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum: "<<sumofArray(arr,n);
    
}
