01.Problem: On Time for the Exam
A student has to attend an exam at a particular time (for example at 9:30 am). They arrive in the exam 
room at a particular time of arrival (for example 9:40 am). It is considered that the student has arrived
on time, if they have arrived at the time when the exam starts or up to half an hour earlier. If the 
student has arrived more than 30 minutes earlier, the student has come too early. If they have arrived
after the time when the exam starts, they are late.
Write a program that inputs the exam starting time and the time of student's arrival, and prints if the 
student has arrived on time, if they have arrived early or if they are late, as well as how many hours 
or minutes the student is early or late.
Sample Input and Output
Input  Output            Input Output             Input Output 
 9     Late              16    Early              9     On time
 30    20 minutes after  00    1:00 hours before  00    30 minutes before
 9     the start         15    the start          8     the start
 50                      00                       30

Input Output               Input Output               Input Output 
9     Late                 14    On time              10    On time
00    1:30 hours after the 00    5 minutes before the 00    Input Data
10    start                13    start                10
30                         55                         00

Read the following four integers (one on each line) from the console:
• The first line contains exam starting time (hours) – an integer from 0 to 23.
• The second line contains exam starting time (minutes) – an integer from 0 to 59.
• The third line contains hour of arrival – an integer from 0 to 23.
• The fourth line contains minutes of arrival – an integer from 0 to 59.
Output Data
Print the following on the first line on the console:
• "Late", if the student arrives later compared to the exam starting time.
• "On time", if the student arrives exactly at the exam starting time or up to 30 minutes earlier.
• "Early", if the student arrives more than 30 minutes before the exam starting time.
If the student arrives with more than one minute difference compared to the exam starting time, print 
on the next line:
• "mm minutes before the start" for arriving less than an hour earlier.
• "hh:mm hours before the start" for arriving 1 hour or earlier. Always print minutes using 2 digits, 
for example "1:05".
• "mm minutes after the start" for arriving more than an hour late.
• "hh:mm hours after the start" for arriving late with 1 hour or more. Always print minutes using 
2 digits, for example "1:03".

02.Problem: Trip
It is strange, but most people start planning their vacations well in advance. A young programmer from 
Bulgaria has certain budget and spare time in a particular season.
Write a program that accepts as input the budget (in BGN – Bulgarian levs) and season, and as output
displays programmer's vacation place and the amount of money they will spend.
The budget determines the destination, and the season determines what amount of the budget will 
be spent. If the season is summer, the programmer will go camping, if it is winter – they will stay in a 
hotel. If it is in Europe, regardless of the season, the programmer will stay in a hotel. Each camp or
hotel, according to the destination, has its own price, which corresponds to a particular percentage of 
the budget:
• If 100 BGN or less – somewhere in Bulgaria.
o Summer – 30% of the budget.
o Winter – 70% of the budget.
• If 1000 BGN or less – somewhere on the Balkans.
o Summer – 40% of the budget.
o Winter – 80% of the budget.
• If more than 1000 BGN – somewhere in Europe.
o Upon traveling in Europe, regardless of the season, the programmer will spend 90% of 
the budget.
Input Data
The input data will be read from the console and will consist of two lines:
• The first line holds the budget – real number in the range [10.00 … 5000.00].
• The second line holds one of two possible seasons: "summer" or "winter".
Output Data
Two lines must be printed on the console.
• On the first line – "Somewhere in {destination}" among "Bulgaria", "Balkans" and "Europe".
• On the second line – "{Vacation type} – {Amount spent}".
o The Vacation can be in a "Camp" or "Hotel".
o The Amount must be rounded up to the second digit after the decimal point.
Sample Input and Output
Input   Output                 Input   Output 
50      Somewhere in Bulgaria  75      Somewhere in Bulgaria
summer  Camp -15.00            winter  Hotel - 52.50

Input  Output                  Input  Output 
312    Somewhere in Balkans    1500   Somewhere in Europe
summer Camp -124.80            summer Hotel – 1350.00

Hints and Guidelines
Typically, as for the other tasks, we can separate the solution into the following parts: reading the 
input data, doing calculations, printing the result.
