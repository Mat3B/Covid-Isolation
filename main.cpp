// Mathe Breland
// CPSC 1021
// This program is suppose to take the input of the user to see if they are positive or negative for covid
// following the answer of the user, the program then asks a series of questions based on the user's input
// which then outputs a series of outputs after hte input is all over with
// Time: an all nighter constant span of 36 hours

#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;

int main() {


	// Variable Declaration
	int Day;
	int Month;
	int Year;
	int testResults;
	int exposedCase;


	// Asks for input of the test results
	cout << "Type 1 if you tested positive or 2 if you tested negative: ";
	cin >> testResults;


	// if the input is 1 
	if (testResults == 1) {


		// create object calle date positive 
		Date datePositive;

		// asks the month for when the user tested positive
		cout << "Please enter the month you tested positive: ";
		cin >> Month;


		// calls the setter for month
		datePositive.setMonth(Month);


			if (datePositive.setMonth(Month) == false) {

				// if setter is false then call the getters
				datePositive.getDay();
				datePositive.getMonth();
				datePositive.getYear();

				// outputs results
				cout << "Test result: positive" << endl;
				cout << "Date tested positive: " << datePositive.showDate() << endl;
				cout << "Length of isolation: 5 days" << endl;

				return 0;
			}


		// asks user for day of positive test
		cout << "Please enter the day you tested positive: ";
		cin >> Day;


		// calls the setter for day
		datePositive.setDay(Day);

		
			if (datePositive.setDay(Day) == false) {

				// if setter is false then it calls the getters
				datePositive.getDay();
				datePositive.getMonth();
				datePositive.getYear();

				// outputs results
				cout << "Test result: positive" << endl;
				cout << "Date tested positive: " << datePositive.showDate() << endl;
				cout << "Length of isolation: 5 days" << endl;

				return 0;
			}

		
		// asks user for year when they tested positive
		cout << "Please enter the year you tested positive: ";
		cin >> Year;


		// calls setter for year
		datePositive.setYear(Year);


			if (datePositive.setYear(Year) == false) {

				// calls getters if value is false
				datePositive.getDay();
				datePositive.getMonth();
				datePositive.getYear();

				cout << "Test result: positive" << endl;
				cout << "Date tested positive: " << datePositive.showDate() << endl;
				cout << "Length of isolation: 5 days" << endl;

				return 0;
			}


		// if none of the setters are false then it just outputs this
		else {

			cout << "Test result: positive" << endl;
			cout << "Date tested positive: " << datePositive.showDate() << endl;
			cout << "Length of isolation: 5 days" << endl;
		}
	
	}



	// if statement for if user tested negative
	if (testResults == 2) {


		// asks the user if they have been exposed to someone who tested positive
		cout << "Type 1 if you were exposed to a positive case or 2 if you weren't: ";
		cin >> exposedCase;


		// if they were exposed create object called exposed
		if (exposedCase == 1) {


			Date dateExposed;


			// asks user for month they were exposed
			cout << "Please enter the month you were exposed to a positive case: ";
			cin >> Month;


			// calls setter for month
			dateExposed.setMonth(Month);


				if (dateExposed.setMonth(Month) == false) {


					dateExposed.getDay();
					dateExposed.getMonth();
					dateExposed.getYear();

					cout << "Test result: negative" << endl;
					cout << "Exposed to positive case: Yes" << endl;
					cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;

					return 0;
				}

			// asks user for day they were exposed
			cout << "Please enter the day you were exposed to a positive case: ";
			cin >> Day;


			// calls setter for day
			dateExposed.setDay(Day);


				if (dateExposed.setDay(Day) == false) {


					dateExposed.getDay();
					dateExposed.getMonth();
					dateExposed.getYear();

					cout << "Test result: negative" << endl;
					cout << "Exposed to positive case: Yes" << endl;
					cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;

					return 0;
				}

			// asks user for year they were exposed
			cout << "Please enter the year you were exposed to a positive case: ";
			cin >> Year;


			// calls setter for year
			dateExposed.setYear(Year);


				if (dateExposed.setYear(Year) == false) {


					dateExposed.getDay();
					dateExposed.getMonth();
					dateExposed.getYear();

					cout << "Test result: negative" << endl;
					cout << "Exposed to positive case: Yes" << endl;
					cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;

					return 0;
				}


			// if none of the setters are negative it outputs this
			else {

					dateExposed.getDay();
					dateExposed.getMonth();
					dateExposed.getYear();

					cout << "Test result: negative" << endl;
					cout << "Exposed to positive case: Yes" << endl;
					cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;
			}
		}

		// if they weren't exposed to someone who tested positive it outputs this
		if (exposedCase == 2) {

			cout << "Test result: negative" << endl;
			cout << "Exposed to positive case: No" << endl;
			cout << "Length of isolation: 0 days" << endl;

			return 0;
		}

		// asks user if they have been vaccinated twice
		int secondDose;

		// gets input from user
		cout << "Type 1 if you received your second vaccination dose or 2 if you didn't: ";
		cin >> secondDose;


		// if statmenet for if they have received second vaccination
		if (secondDose == 1) {


			// create object called second dose
			Date secondDose;


			cout << "Second vaccination does received: Yes" << endl;


			// asks user for month when they received vaccine
			cout << "Please enter the month you got your second vaccine: ";
			cin >> Month;
			secondDose.setMonth(Month);

				if (secondDose.setMonth(Month) == false) {


					secondDose.getDay();
					secondDose.getMonth();
					secondDose.getYear();

					cout << "Date second vaccination dose received: " << secondDose.showDate() << endl;

					return 0;
				}


			// asks user for day when they received vaccine
			cout << "Please enter the day you received your second vaccination: ";
			cin >> Day;
			secondDose.setDay(Day);

				if (secondDose.setDay(Day) == false) {


					secondDose.getDay();
					secondDose.getMonth();
					secondDose.getYear();

				
					cout << "Date second vaccination dose received: " << secondDose.showDate() << endl;
				

					return 0;
				}


			// asks user for year when they received vaccine
			cout << "Please enter the year you received your second vaccination: ";
			cin >> Year;
			secondDose.setYear(Year);

				if (secondDose.setYear(Year) == false) {


					secondDose.getDay();
					secondDose.getMonth();
					secondDose.getYear();

				
					cout << "Date second vaccination dose received: " << secondDose.showDate() << endl;

					return 0;
				}


			// if none of the setters are false it outputs this
			else {

					secondDose.getDay();
					secondDose.getMonth();
					secondDose.getYear();

				
					cout << "Date second vaccination dose received: " << secondDose.showDate() << endl;
				
			}
		}

		if (secondDose == 2) {

			cout << "Second vaccination does received: No" << endl;
			cout << "Vaccination status at time of exposure: not fully vaccinated" << endl;
			cout << "Length of isolation: 10 days" << endl;

			return 0;
		}

		
	}

		







	return 0;
}