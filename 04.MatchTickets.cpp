#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	double budget;
	cin>> budget; 
	string ticketType;
	cin >> ticketType;
	int people;
	cin >> people;
	double transportCharges=0;
	double moneyForTickets=0;
	double moneyDifference = 0;
	if (people<=4){
		transportCharges = 0.75 * budget;
	}
	else if (people<=9){
		transportCharges = 0.6 * budget;
	}
	else if (people<=24){
		transportCharges = 0.5 * budget;
	}
	else if (people <= 49) {
		transportCharges = 0.4 * budget;
	}
	else {
		transportCharges = 0.25 * budget;
	}
	if (ticketType=="VIP") {
		moneyForTickets = people * 499.99;
	}
	else{
        moneyForTickets= people * 249.99;
	}
	moneyDifference = budget - transportCharges - moneyForTickets;
	if ((budget - transportCharges)<(moneyForTickets*people)){
		double result = abs(moneyDifference);
		cout << "Not enough money! " << "You need " <<
			fixed << setprecision(2) << result <<
			" leva." << endl;
	}
	else {
		cout << "Yes! You have " <<
			fixed << setprecision(2) << moneyDifference <<
			" leva left." << endl;
	}
	return 0;
}
