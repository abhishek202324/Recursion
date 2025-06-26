#include<iostream>
using namespace std;
int  sumOfelement(int arr[], int size){
    if(size==0)return 0;
    return sumOfelement(arr,size-1)+arr[size-1]*arr[size-1];
    

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int result=sumOfelement(arr,5);
    cout<<"The sum of square of all element of the array :"<<result<<" ";
 return 0;
}