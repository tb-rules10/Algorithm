#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem;

    cout << "Enter an integer: ";
    cin >> n;
    int x=n;
    while(n != 0) {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    cout << "Reversed Number: " << rev<<endl;

    if (x==rev){
        cout<<"Its palindrome no.";
    }
    else{
        cout<<"Its not a palindrome no.";
    }
    return 0;
}
