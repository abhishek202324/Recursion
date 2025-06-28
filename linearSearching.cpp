#include<iostream>
using namespace std;
bool linearSearching(int arr[], int size,int key){
    if(size==0)return false;
    if(arr[0]==key)return true;
    return linearSearching(arr+1,size-1,key);
    
    
    

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=4;
    
    if(linearSearching(arr,size,key)){
        cout<<"The element get find";
    }
    else{
        cout<<"The element not found ";
    }
 return 0;
}