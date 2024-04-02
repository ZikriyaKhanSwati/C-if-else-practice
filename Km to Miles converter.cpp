// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    cout << "Type 'a' to convert Mile into Kilometer \n";
    cout << "Type 'b' to convert Kilometer into Mile \n";
    char option;
    cin >> option;
    
    if(option == 'a'){
        cout << "Enter distance in Mile : ";
        double miles,result;
        cin >> miles;
        result = miles * 1.60934;
        cout << "Distance in Kilometer : " << result << " km";
    }
    else if(option == 'b'){
        cout << "Enter distance in Kilometer : ";
        double miles,result;
        cin >> miles;
        result = miles / 0.621371;
        cout << "Distance in Mile : " << result << " mile";
    }
    else{
        cout << "Invalid input!!";
    }

    return 0;
}