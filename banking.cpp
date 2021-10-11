/*Write a program in C++ for the Banking management system for 5 to 10 customers. 
it's a basic program for the practice of the concept of Switch, If else, Loop, Array for creating the program.
 The basic operations will include - 
Opening an account 
Show account info
Deposit
Withdraw
Search
************************************************************************************************/

/* 1. use array and enter records - account number,name,balance.
   2. menu driven program - display all, account number,deposit,withdraw,exit
   3. enter choice
   4. choice 1 - display records
   5. choice 2 - ask account number - records of the given account number
   6. choice 3 - deposit - account number - records of account - ask deposit
   7. balance  - balance + deposit
   8. choice 4 - withdraw - acc number - records- ask withdrawal
   9. balance  - balance - withdrawal
   10. choice 1- display all records
   11. choice 5- have a nice day

   ***************************************************************************************/



#include <iostream>

using namespace std;

const int maxAccounts = 5;

int accountnumber[maxAccounts];
char name[maxAccounts][30];
int balance[maxAccounts];

void search() {
    int accnum;
    cout << " enter account number";
    cin >> accnum;
    for(int i = 0; i<maxAccounts; i++){
        if(accountnumber[i] == accnum){
            cout<<"account number = "<< accountnumber[i]<<endl;
            cout<<"name = "<< name[i]<<endl;
            cout<<"balance = "<<balance[i]<<endl;
        }
    }
}

void deposit(){
   int accnumber;

    cout<<"account number";
    cin>>accnumber;
    int amount;
    cout<<"enter amount u want to add:";
    cin>>amount;
    
    for(int i = 0; i<maxAccounts; i++){
    if(accountnumber[i]==accnumber){
    
    balance[i] = balance[i] + amount;
    cout<<"name  :"<<name[i]<<endl;
    cout<<"new balance  :"<<balance[i]<<endl;
    }
    }
}

void withdraw(){
    int accnumber;

    cout<<"account number";
    cin>>accnumber;
    int amount;
    cout<<"enter amount u want to withdrawal:";
    cin>>amount;
    
    for(int i = 0; i<maxAccounts; i++){
    if(accountnumber[i]==accnumber){
         if (amount <= balance[i]){
            balance[i] = balance[i] - amount;
             cout<<"name  :"<<name[i]<<endl;
    cout<<"remaining new balance  :"<<balance[i];}
        else{
            cout << "Less Balance..." << endl;}
   
    }
    }
}

void end(){
    cout<<"Thankyou! "<<endl;
    cout<<"Have a nice day";
}

void management() {
    for (int i = 0; i < maxAccounts; i++) {
        cout << "Enter Account Number " << i + 1 << ": ";
        cin >> accountnumber[i];
        cout << "Enter Name " << i + 1 << ": ";
        cin >> name[i];
        cout << "Enter  Balance " << i + 1 << ": ";
        cin >> balance[i];
    }

    for (int i = 0; i < maxAccounts; i++) {
        cout << " ..... " << endl;
        cout << "Account Number: " << accountnumber[i] << endl;
        cout << "Name: " << name[i] << endl;
 cout << "Balance: " << balance[i] << endl;
    }
   
   

}



int main() {
    management();
    while (true){
    int ch;
    cout<<"enter choice"<<endl;
    cout<<"for displaying your account enter 1"<<endl;
    cout<<" for depoiting money enter 2"<<endl;
    cout<<" to withdrawing money enter 3"<<endl;
    cout<<"to end the operation enter 4"<<endl;
    
    cin>>ch;

    switch(ch){
        
    case 1:
    search();
    break;

    case 2:
    deposit();
    break;

    case 3:
    withdraw();
    break;

    case 4:
    end();
    break;
    }
    if (ch==4){
        break;
    }
    }
    return 0;
}
