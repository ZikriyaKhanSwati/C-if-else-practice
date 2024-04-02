// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

// Tasks from Chat GPT:
	// Display welcome message
	// Display menu
    // Prompt user for temperature value
    // Based on user's choice, perform the conversion
    // Display the converted temperature and a friendly message
    // Ask the user if they want to convert another temperature or exit
	
int main() {
    
    string welcome, C_F, F_C;
	
	// Assigning variables for welcome message and menu
    welcome = "Welcome to Temperature Converter.";
    C_F = "Type 'one' to convert temperature from Celsius into Fahrenhiet.";
    F_C = "Type 'two' to convert temperature from Fahrenheit into Celsius.";
    cout << welcome << "\n\n" << C_F << "\n" << F_C << "\n";
    
	// Asking for the type of converter
	string converter;
    cin >> converter;
    cout << "--------------------------------------------------------------\n\n";
    float temp, result;
	
    // Using if else.. for different converters
    if (converter == "one"){
        cout << "Temperature in Celsius = ";
        cin >> temp;
        result = (9*temp+160)/5;
        cout << "Temperature in Fahrenheit = " << result;
    }
    else if(converter == "two") {
        cout << "Temperature in Fahrenheit = ";
        cin >> temp;
        result = (temp-32)*5/9 ;
        cout << "Temperature in  Celsius = " << result;
    }
	else{
		cout << "Invalid Input";
	}
    return 0;
}