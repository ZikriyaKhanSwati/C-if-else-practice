#include <iostream>
using namespace std;


int main() {
    
    // Welcome message
    cout << "WELCOME TO NEW COFFEE SHOP\n";
    cout << "--------------------------\n\n";
    cout << "What would you like to order from our menu:\n";
    cout << "1.Tea    = 90Rs\n";
    cout << "2.Coffee = 90Rs\n";
    cout << "3.Pepsi  = 90Rs\n\n";
	
    // Assigning price and taking order from cin function
    int price = 90;
    string order;
    cin >> order;
    
	// Asking the Quantity
	cout << "How many?\n";
    int quantity;
    cin >> quantity;
	
    // Using simple math to calculate total amoount
    int total = quantity * price;
    cout << "\nSounds great. \nYour total will be = " << total << "Rs";
    
    return 0;
}