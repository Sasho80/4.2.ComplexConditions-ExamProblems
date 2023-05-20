#include <iostream>
#include <string>
using namespace std;
int main()
{
	int examHours, examMinutes, arrivalsHours, arrivalsMinutes;
	cin >> examHours;
	cin >> examMinutes;
	cin >> arrivalsHours;
	cin >> arrivalsMinutes;
	string late = "Late";
	string onTime = "On Time";
	string early = "Early";
	int examTime = (examHours * 60) + examMinutes;
	int arrivalTime = (arrivalsHours * 60) + arrivalsMinutes;
	int totalMinutesDifference = arrivalTime - examTime;
	string studentArrival = late;
	if (totalMinutesDifference<-30) {
		studentArrival = early;
	}
	else if(totalMinutesDifference<=0){
		studentArrival = onTime;
	}
	string result;
	if (totalMinutesDifference!=0) {
		int hoursDiffrence =
			abs(totalMinutesDifference / 60);
		int minutesDifference=
			abs(totalMinutesDifference % 60);
		if (hoursDiffrence>0) {
             //result"{hoursDiffrence}:"
			result = to_string(hoursDiffrence) + ":";
			//result="{hoursDiffrence}:0" /"{hoursDiffrence}:"
			if (minutesDifference<10) {
				result += "0";
			}
			//result="{hoursDiffrence}:{minutesDiffrence}hours"
			result+= to_string(minutesDifference) + " hours";
		}
		else {
			result += to_string(minutesDifference) + " minutes";
		}
		if (totalMinutesDifference<0) {
			result += " before the start";
		}
		else {
			result += " after the start";
		}
	}
	cout << studentArrival << endl;
	if (result!="") {
		cout << result << endl;
	}
}
