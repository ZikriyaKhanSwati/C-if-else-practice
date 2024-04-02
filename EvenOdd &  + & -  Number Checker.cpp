#include <iostream>
using namespace std;

// dont use number is neutral kyou ke koi numbers neutral nhi hote
// use something else like invalid input or input is not number

// *BUG ::: By giving non-integer input, it is considered as positive*  

int main() {
	cout << "Enter a number : ";
    int num;
	cin >> num;
	
	if(num>=0 && num%2==0){
		cout << "Given number is positive and even";
	}
	
	else if(num>=0 && num%2!=0){
		cout << "Given number is positive and odd";
	}
	
	else if(num<0 && num%2==0)
	    cout << "Given number is negative and even";
	    
	else if(num<0 && num%2!=0)
	    cout << "Given number is negative and odd";
	    
	else {
	    cout << "Invalid Input!!!";
	}
	return 0;
}
