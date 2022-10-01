// Mathe Breland
// CPSC 1021
// This program is suppose to take the input of the user to see if they are positive or negative for covid
// following the answer of the user, the program then asks a series of questions based on the user's input
// which then outputs a series of outputs after hte input is all over with
// Time: an all nighter constant span of 36 hours

#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <iomanip>
#include <string>


// creation of the class DATE
class Date {

private:

	// private variable declaration
	int Day{ 01 };
	int Month{ 01 };
	int Year{ 2021 };

public:

	// public member function declaration
	Date() = default;

	Date(int d, int m, int y) :
		Day{ d }, Month{ m }, Year{ y }
	{

		// setting setters back to default functions if not following specific rules
		if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {

			if (Day < 1 || Day > 31 || Year < 2021 || Year > 2022) {
				Day = 1;
				Month = 1;
				Year = 2021;
			}
		}

		else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {

			if (Day < 1 || Day > 31 || Year < 2021 || Year > 2022) {
				Day = 1;
				Month = 1;
				Year = 2021;
			}
		}

		else if (Month == 2) {

			if (Day < 1 || Day > 28 || Year < 2021 || Year > 2022) {

				Day = 1;
				Month = 1;
				Year = 2021;
			}
		}

		else if (Day < 1 || Day > 31) {
			Day = 1;
			Month = 1;
			Year = 2021;
		}

		else if (Month < 1 || Month > 12) {
			Day = 1;
			Month = 1;
			Year = 2021;
		}


		else if (Year < 2021 || Year > 2022) {
			Day = 1;
			Month = 1;
			Year = 2021;
		}
		
	}

	// declaration of setter functions
	bool setDay(int);
	bool setMonth(int);
	bool setYear(int);

	// declaration of getter functions
	int getDay();
	int getMonth();
	int getYear();

	// declaration of showdate (string) function
	std::string showDate();


};


#endif