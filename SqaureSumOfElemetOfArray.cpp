#include <iostream>
using namespace std;
int sumofSquareArr(int arr[],int n){
    if(n==0) return 0;//base case..
    
    return arr[n-1]*arr[n-1]+sumofSquareArr(arr,n-1);
}
int main() {
    
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sumofSquareArr(arr,n);
    return 0;


    return 0;
}