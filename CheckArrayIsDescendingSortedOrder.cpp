#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    if(size==0 || size==1)return true;
    if( isSorted(arr,size-1) && arr[size-1]<=arr[size-2])return true;
    return false;
    

}
int main()
{
    int arr[]={6,5,4,3,2,2,1,1};
    int size=5;
    
    if(isSorted(arr, size)){
        cout<<"The array is sorted in reverse order  ";
    }
    else{
        cout<<"The array is not sorted in reverse order";
    }
 return 0;
}