#include <iostream>
using namespace std;


int main() {
    
    cout << "WELCOME TO NEW COFFEE SHOP\n";
    cout << "--------------------------\n\n";
    cout << "What would you like to order from our menu:\n";
    cout << "1.Tea    = 50Rs\n";
    cout << "2.Coffee = 200Rs\n";
    cout << "3.Juice  = 100Rs\n";
    cout << "4.Fries  = 100Rs\n\n";
	
	string order;
	int price, quantity, total;
	cin >> order;
	
	if (order == "Tea"){
	    price = 50;
	    cout << "How many?\n";
	    cin >> quantity;
	    total = price * quantity; 
	    cout << "-------------------------------------------\n";
	    cout << "Your total will be : " << total << "Rs";
	}
    
    else if(order == "Coffee"){
	    price = 200;
	    cout << "How many?\n";
	    cin >> quantity;
	    total = price * quantity; 
	    cout << "-------------------------------------------\n";
	    cout << "Your total will be : " << total << "Rs";
	}
    
     else if(order == "Juice" || order == "Fries"){
	    price = 100;
	    cout << "How many?\n";
	    cin >> quantity;
	    total = price * quantity; 
	    cout << "-------------------------------------------\n";
	    cout << "Your total will be : " << total << "Rs";
	}
	
	 else {
	    cout <<"Invalid Input!!!";
	}
    return 0;
}