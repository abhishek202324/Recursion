#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;// base case..
    }
    return n*factorial(n-1); //Recurive case..

}
int main(){
    int Fact=factorial(6);
    cout<<"Factorial of the number is   :"<<Fact<<endl;
}
