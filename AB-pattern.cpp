#include <iostream>
using namespace std;
int main(){
    int i,j,k=1;
    char ch;
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            ch = (k%2)? 'A' : 'B'; 
            cout<<ch<<" ";
            k++;
        } 
        cout<<"\n"; 
    }
}
