/*****************************************************
**hw1.cpp
**Breaks down amount into individual units of currency
**Patrick Xie, (01/12/2010)
*****************************************************/

#include <iostream> //Library which allows input and output stream, needed for cout
using namespace std; // Tells the computer to use the standard namespace

int main() { //Driver

	//Variables
	int total_amount;  //Total amount user has in cents
	int dollars; //Dollars the user has
	int quarters; //Quarters the user has
	int dimes; //Dimes the user has
	int nickels; //Nickels the user has
	int pennies; //Pennies the user has

	//First print out on screen that asks user to input amount of cents.
	cout <<"How many cents do you have in your pocket?\n"; 
		
	cin >> total_amount; //The user input the amount of cents.
		
	dollars = (int) total_amount / 100; //Equation for finding amount of dollars from user's input

	quarters = (int) (total_amount % 100) / 25; /*Using the Mod Operator to figure out how many quarters 
													can be made from the remainder from the dollars*/

	dimes = (int) ((total_amount % 100) % 25) / 10; /*Using the Mod Operator to figure out how many dimes
														can be made from the remainder from the quarters*/

	nickels = (int) (((total_amount % 100) % 25) % 10) / 5; /*Using the Mod Operator to figure out how many
																nickel's can be made from the remainder from the dimes*/

	pennies = (int) ((((total_amount % 100) % 25) % 10) % 5) / 1; /*Using the Mod Operator to figure out how many
																	pennies can be made from the remainder from the nickels*/

	//The print out on the concole when user inputs integer by hitting [enter].
	cout<< "This corresponds to " 
		<< dollars << " dollars, "
		<< quarters << " quarters, " 
		<< dimes << " dimes, " 
		<< nickels << " nickels, and " 
		<< pennies << " pennies.\n\n"; 

	return 0; //This command sends a value to the computer telling us main function is complete
}