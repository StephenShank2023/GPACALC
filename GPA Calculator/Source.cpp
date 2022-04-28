#include <iostream>
using namespace std;

int main()
{
	int numClasses = 4;
	float inputGrade1;
	float inputGrade2;
	float inputGrade3;
	float inputGrade4;
	double averageGrade;

	cout << "Enter class grade 1: ";
	cin >> inputGrade1;

	cout << "Enter class grade 2: ";
	cin >> inputGrade2;

	cout << "Enter class grade 3: ";
	cin >> inputGrade3;

	cout << "Enter class grade 4: ";
	cin >> inputGrade4;

	/*we use the input grades based off the 4 point system averaged to gain out final output
	which determines which of the honors whom ever uses this */

	averageGrade = ((inputGrade1 + inputGrade2 + inputGrade3 + inputGrade4) / numClasses);
	cout << "Your average GPA is: ";
	cout << averageGrade;
	cout << endl;

	cout << "You Are Graduating ";
	if (averageGrade > 3.9)
	{
		cout << "Summa Cum Laude!";
	}
	else if (averageGrade > 3.8 && averageGrade <= 3.89)
	{
		cout << "Magna Cum Laude!";
	}
	else if (averageGrade > 3.65 && averageGrade <= 3.79)
	{
		cout << "Cum Laude!";
	}
	else if (averageGrade < 3.64)
	{
		cout << "With No Honors";
	}
	/*instead of making every line in the else if statements print out "graduating honors" i inturn used a starting
	with "you are graduating " and for each else if for it particular honors is the grade point average so simplify
	it for reading and a coding aspect, and it runs*/
}