#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	double n1, n2;
	cin >> n1;
	cin >> n2;
	char nOperator;
	cin >> nOperator;
	double result=0;
	string numberIs;
	if (n2 == 0 && (nOperator == '/' || nOperator == '%')) {
		cout << "Cannot divide " << n1 << " by zero" << endl;
	}
	else if (nOperator == '/'){
		result = n1/ n2;
		cout << n1 << " " << nOperator << " " << n2 <<
			" = " << fixed<<setprecision(2)<<result << endl;
	}
	else if (nOperator == '%'){
		result=fmod(n1,n2);
		cout << n1 << " " << nOperator << " " << n2 <<
			" = " << result << endl;
	}
	else{
		if (nOperator=='+') {
			result = n1 + n2;
		}
		else if (nOperator == '-'){
			result = n1- n2;
		}
		else if (nOperator == '*') {
			result = n1 *n2;
		}
		if (fmod(result,2)==0) {
			numberIs = "even";
		}
		else {
			numberIs = "odd";
		}
		cout << n1 << " " << nOperator << " " << n2 <<
			" = " << result<< " - " <<numberIs <<endl;
	}
}
