// Mathe Breland
// CPSC 1021
// This program is suppose to take the input of the user to see if they are positive or negative for covid
// following the answer of the user, the program then asks a series of questions based on the user's input
// which then outputs a series of outputs after hte input is all over with
// Time: an all nighter constant span of 36 hours

#include "Date.h"
#include <string>
#include <iostream>
#include <iomanip>


// implementation and ruling for setter function (month) used in main
bool Date::setMonth(int m) {

	bool validData = true;
		if (m >= 1 && m <= 12) {

			Month = m;
			validData = true;
			return validData;
		}

	else {
		validData = false;
		return validData;
	}

	return validData;
}


// implementation and ruling for setter function (day) used in main
bool Date::setDay(int d) {

	bool validData = true;
		if (d >= 1 && d <= 31) {

	
				Day = d;
				validData = true;
				return validData;
				
			
		}

	
		else {

			validData = false;
			return validData;
		}

		return validData;
	
}

// implementation and ruling for setter function (year) used in main
bool Date::setYear(int y) {
	bool validData = true;
		if (y >= 2021 && y <= 2022) {

			Year = y;
			validData = true;
			return validData;
		}
	
	else {
	
			validData = false;
			return validData;
	}
}

// declaration of getter functions used in main
int Date::getDay() {
	return Day;
}
int Date::getMonth() {
	return Month;
}
int Date::getYear() {
	return Year;
}


// system of equation for outputting the string correctly 
std::string Date::showDate() {

	if (Day < 10) {

		if (Month < 10) {

			return "0" + std::to_string(Month) + "/" + "0" + std::to_string(Day) + "/" + std::to_string(Year);

		}
		return std::to_string(Month) + "/" + "0" + std::to_string(Day) + "/" + std::to_string(Year);

	}

	if (Month < 10) {

		return "0" + std::to_string(Month) + "/" + std::to_string(Day) + "/" + std::to_string(Year);

	}



	return  std::to_string(Month) + "/" + std::to_string(Day) + "/" + std::to_string(Year);
}

