#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n *factorial(n-1);
}    
int fib(int x){
    if(x<2){
        return 1;
    }
    return fib(x-2)+ fib(x-1);
}
int main(){
    int a;int b;
    cout<<"Entet the number you want the factorial of:";
    cin>>a;
    cout<<"The Factorial of the number you want is:"<<factorial(a)<<endl;
    cout<<"Enter the position at which you want the term of fibbonacci series :";
    cin>>b;
    cout<<"The term of fibonacci series at the position:"<<b<<"is:"<<fib(b)<<endl;
    return 0;
}
