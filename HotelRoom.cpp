#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string month;
	cin >> month;
	int nights;
	cin >> nights;
	double studioPrice = 0;
	double apartmentPrice = 0;
	double studioRent = 0;
	double apartmentRent = 0;
	if (month == "May" || month == "October") {
		studioPrice = 50;
		apartmentPrice = 65;
		studioRent = studioPrice * nights;
		apartmentRent = apartmentPrice * nights;
		if (nights > 14) {
			studioRent *= 0.7;
			apartmentRent *= 0.9;
		}
		else if (nights > 7) {
			studioRent *= 0.95;
		}
	}

	else if (month == "June" || month == "September") {
		studioPrice = 75.2;
		apartmentPrice = 68.7;
		studioRent = studioPrice * nights;
		apartmentRent = apartmentPrice * nights;

		if (nights > 14) {
			studioRent *= 0.8;
			apartmentRent *= 0.9;
		}
	}
	else if (month == "July" || month == "August") {
		studioPrice = 76;
		apartmentPrice = 77;
		studioRent = studioPrice * nights;
		apartmentRent = apartmentPrice * nights;

			if (nights > 14) {
				apartmentRent *= 0.9;
			}
		}
		cout << "Apartment: " <<
			fixed << setprecision(2) << apartmentRent <<
			" lv." << endl;
		cout << "Studio: " <<
			fixed << setprecision(2) << studioRent <<
			" lv." << endl;
		return 0;
}