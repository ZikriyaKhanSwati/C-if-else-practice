#include <iostream>
using namespace std;

// handle the case for if user enters a number because you are taking input in string not in char
// Best practice is to chnage the input type to char
//  change input to char letter and write in single quotes for eg letter=='a'

int main() {
	cout << "Enter a letter : ";
	char letter;
	cin >> letter;
	
	if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
	    
		cout << "Given letter is vowel";
	}
	else {
		cout << "Given letter is consonant";
	}
	return 0;
}

---------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

// handle the case for if user enters a number because you are taking input in string not in char
// Best practice is to chnage the input type to char
//  change input to char letter and write in single quotes for eg letter=='a'

int main() {
	cout << "Enter a letter : ";
	string letter;
	cin >> letter;
	
	if(letter=="a" || letter=="e" || letter=="i" || letter=="o" || letter=="u"){
	    
		cout << "Given letter is vowel";
	}
	else if (letter=="b"||letter=="c"||letter=="d"||letter=="f"||letter=="g"||letter=="h"||letter=="j"||letter=="k"||letter=="l"||letter=="m"||letter=="n"||letter=="p"||letter=="q"||letter=="r"||letter=="s"||letter=="t"||letter=="v"||letter=="w"||letter=="x"||letter=="y"||letter=="z") {
		cout << "Given letter is consonant";
	}
	else{
	    cout << "Invalid Input";
	}
	return 0;
}
