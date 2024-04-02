#include <iostream>
using namespace std;

int main() {
   
   //taking and assigning the user input
   double num1, num2, num3;
   cout << "enter a number = ";
   cin >> num1;
   cout << "enter second number = ";
   cin >> num2;
   cout << "enter third number = ";
   cin >> num3;
   
   //usning if else.. to determine the greatest among three inputs
   if (num1 > num2 && num1 >> num3){
       cout << num1 << " is greater";
   }
   else if(num2 > num1 && num2 > num3){
       cout << num2 << " is greater";
   }
   else{
       cout << num3 << " is greater";
   }
    return 0;
}