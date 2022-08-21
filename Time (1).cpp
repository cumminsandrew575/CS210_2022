/*
 * IOS8Time.cpp
 *
 *  Created on: Jul 10, 2022
 *      Author: andrewcummins_snhu
 */


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int h12;							//Establish variables with data types
int h24;
int m;
int s;
string amPm;

void addOneHour() {					//add hour to IOS8 clock function
	h12 = h12 + 1;
	//resetting time for 12 hour clock to be pm
	if (h12 >= 12) {
		h12 = h12 - 12;
		if (amPm == "AM")			//If hour increase past 12 it changes AM to PM
			amPm = "PM";
		else
			amPm = "AM";
	}
}

void addOneMinute() {				//Add minute to IOS8 clock function
	m = m + 1;						//Equation to add a second
	if (m > 59) {					//Ensure minutes do not increase to 60
		m = 0;
		addOneHour();

	}
}

void addOneSecond() {				//Add second to I0S8 clock function
	s = s + 1;						//Equation to add a second
	if (s > 59) {					//Ensure seconds do not increase to 60
		s = 0;
		addOneMinute();
	}
}


int main() {

	int userInput = 0;				//Establish variables with data types
	h12 = 7;						//setting the intial clock timing manually
	m = 47;
	s = 59;
	amPm = "PM";


	while (1) { 					//Establish loop for user to run program uninterrupted

		if (amPm == "PM") {			//Setting 24 Hour Clock
			h24 = h12 + 12;			//Equation to get the desired time
			if (h24 >= 24) {		//Ensure time does not increase past 24
				h24 = h24 - 24;
			}
		}
		else {
			h24 = h12;
		}

		//Establish clock display
		cout << "***************************   ***************************" << endl;
		cout << "*      12 - HOUR CLOCK    *   ";
		cout << "*      24 - HOUR CLOCK    *" << endl;
		cout << endl;
		cout << "*      " << setw(2) << setfill('0') << h12 << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << " " << amPm << "        *   ";
		cout << "*        " << setw(2) << setfill('0') << h24 << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << " " << "        *" << endl;
		cout << "***************************   ***************************" << endl;
		//Give user their input options
		cout << endl;
		cout << endl;
		cout << "***************************" << endl;
			cout << "* 1-Add one hour *" << endl;
		cout << "* 2-Add one minutes *" << endl;
		cout << "* 3-Add one second *" << endl;
		cout << "* 4-Exit program *" << endl;
		cout << " * **************************" << endl;

			cout << "Input a number 1-4: ";
		cin >> userInput;
		switch (userInput) {	//Multi Branch decision making
		case 1:			//user input = 1 and addOneHour function is called
			addOneHour();
			break;
		case 2:			//user input = 2 and addOneMinute function is called
			addOneMinute();
			break;
		case 3:			//user input = 3 and addOneSecond function is called
			addOneSecond();
			break;
		case 4:			//user input = 4 and user exits program
			cout << "Exiting Program, Goodbye" << endl;
			exit(1);
			break;
		default:
			cout << "Enter a number 1-4";
		}
	}
}

