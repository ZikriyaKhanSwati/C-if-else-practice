// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    cout << "Withdraw amount = Rs";
    double withdraw,newBalance;
    double balance = 10000;
    cin >>  withdraw;
    if(withdraw < balance && withdraw > 0){
        newBalance = balance - withdraw;
        cout << "Previous Balance = Rs" << balance << endl;
        cout << "Current Balance = Rs" << newBalance;
    }
    else if(withdraw > balance){
        cout << "Insufficient Balance." << endl; 
        cout << "Current Balance = Rs" << balance;
    }
    else {
        cout << "Invalid Input";
    }
    return 0;
}