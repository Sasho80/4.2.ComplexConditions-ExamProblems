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

03.Problem: Operations with Numbers
Write a program that reads two integers (n1 and n2) and an operator that performs a particular
mathematical operation with them. Possible operations are: summing up (+), subtraction (-), multiplying (*), division (/) and modular division (%). Upon summing up, subtracting and multiplying, the 
console must print the result and display whether it is even or odd number. Upon regular division –
just the result, and upon modular division – the remainder. You need to take into consideration the 
fact that the divisor can be equal to zero (= 0) and dividing by zero is not possible. In this case, a
special notification must be printed.
Input Data
3 lines are read from the console:
• N1 – integer within the range [0 … 40 000].
• N2 – integer within the range [0 … 40 000].
• Operator – one character among: "+", "-", "*", "/", "%".
Output Data
Print the output as a single line on the console:

• If the operation is summing up, subtraction or multiplying:
o "{N1} {operator} {N2} = {output} - {even/odd}".
• If the operation is division:
o "{N1} / {N2} = {output}" – the result is formatted up to the second digit after the decimal 
point.
• If the operation is modular division:
o "{N1} % {N2} = {remainder}".
• In case of dividing by 0 (zero):
o "Cannot divide {N1} by zero".
Sample Input and Output
Input Output            Input Output                        Input Output
10    10 - 1 = 9 - odd  10    Cannot divide 10 by zero      10    10 + 12 = 22 - even
1                       0                                   12
-                       %                                   +
Input Output            Input Output            Input Output
123   123 / 12 = 10.25  10    10 % 3 = 1        112   Cannot divide 112 by zero
12                      3                       0
/                       %                       /

Hints and Guidelines
The problem is not complex, but there are a lot of code lines to write.

04.Problem: Game Tickets
A group of football fans decided to buy tickets for Euro Cup 2016. The tickets are sold in Bulgarian 
leva (BGN) in two price categories:
• VIP – 499.99 BGN (Bulgarian leva)
• Normal – 249.99 BGN (Bulgarian leva)
The football fans have a shared budget, and the number of people in the group determines what 
percentage of the budget will be spent on transportation:
• 1 to 4 – 75% of the budget
• 5 to 9 – 60% of the budget
• 10 to 24 – 50% of the budget
• 25 to 49 – 40% of the budget
• 50 or more – 25% of the budget
182 Programming Basics with C#
Write a program that calculates whether the money left in the budget will be enough for the football 
fans to buy tickets in the selected category, as well as how much money they will have left or be 
insufficient.
Input Data
The input data is read from the console and contains exactly 3 lines:
• The first line holds the budget – real number within the range [1 000.00 … 
1 000 000.00].
• The second line holds the category – "VIP" or "Normal".
• The third line holds the number of people in the group – an integer within the range [1 … 200].
Output Data
Print the following on the console as one line:
• If the budget is sufficient:
o "Yes! You have {N} leva left." – where N is the amount of remaining money for the group.
• If the budget is NOT sufficient:
o "Not enough money! You need {М} leva." – where М is the amount that is insufficient.
The amounts must be formatted up to the second digit after the decimal point.
Sample  Input and Output
Input   Output           Explanations 
1000    Yes! You have    1 person: 75% of the budget are spent on transportation.
Normal  0.01 leva left.  Remaining amount: 1000 – 750 = 250.
1                        Category Normal: the ticket price is 249.99 * 1 = 249.99
                         249.99 < 250: the person will have 250 - 249.99 = 0.01 money left
                         
Input  Output            Explanations 
30000  Not enough money! 49 persons: 40% of the budget are spent on transportation.
VIP    You need 6499.51  Remaining amount: 30000 - 12000 = 18000.
49     leva.             Category VIP: the ticket costs 499.99 * 49.
                         24499.51 < 18000: the amount is not enough, more money
                         needed: 24499.51 - 18000 = 6499.51
Hints and Guidelines
We will read the input data and perform the calculations described in the task requirements, in order 
to check if the money will be sufficient.
