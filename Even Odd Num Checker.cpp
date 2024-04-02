#include <iostream>
#include <iostream>
using namespace std;

// dont use number is neutral kyou ke koi numbers neutral nhi hote
// use something else like invalid input or input is not number

int main() {
	cout << "Enter a number : ";
	int num;
	cin >> num;
	
	if(num%2==0 ){
		cout << "Given number is even";
	}
	else if(num%2!=0){
		cout << "Given number is odd";
	}
	else {
		cout << "Invalid Input";
	}
	return 0;
}