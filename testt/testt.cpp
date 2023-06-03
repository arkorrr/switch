#include <iostream>
using namespace std;

int main()			//Task10
{
	const int rows = 5;
	const int hintscount = 4;
	string question[] =
	{
		"Are you like programming?",
		"Are you a programmer?",
		"Whats name of our programmer teacher?",
		"How long time it takes to cook pasta?",
		"In this game, people playing 6 on 6: ",
	};
	string answer[rows][hintscount] =
	{
		{"yes", "no", "studying" ,"maybe"},
		{"yes", "no", "studying" ,"maybe"},
		{"alex", "irina", "evgeniy", "anna"},
		{"10min", "5min", "8min", "6min"},
		{"volleyball", "football", "basketball", "tennis"},
	};
	string rightAnswer[] =
	{
		"studying",
		"studying",
		"alex",
		"5min",
		"volleyball",
	};
	cout << "All answers must be written in lower case and only word.\nChoose the correct answer\n";

	for (auto c = 0;c < rows; c++)
	{
		cout << question[c] << endl;
		for (auto q = 0; q < hintscount; q++)
		{
			cout << answer[c][q] << endl;
		}
		string answ;
		cin >> answ;
		if (rightAnswer[c] != answ)
			{
				cout << endl << "I'm sorry but you didn't answer correctly" << endl;
				exit(1);
			}
			else
			{
				cout << endl << "You answered correctly, Good luck with the next question.\n" << endl;
			}
		}


int day;		//Task3 with switch
		cout<< "Enter day:\n(1 - Monday) \n(2 - Tuesday) \n(3 - Wednesday) \n(4 - Thursday), \n(5 - Friday) \n(6 - Saturday) \n(7 - Sunday)\n";
		cin >> day;
		switch(day)
		{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "Error";
			break;
		}
//Task3 with if,else
		/*if (day == 1) {
			cout << "Monday";
		}
		else if (day == 2) {
			cout << "Tuesday";
		}
		else if  (day == 3) {
			cout << "Wednesday";
		}
		else if (day == 4) {
			cout << "Thursday";
		}
		else if (day == 5) {
			cout << "Friday";
		}
		else if (day == 6) {
			cout << "Saturday";
		}
		else if (day == 7) {
			cout << "Sunday";
		}
		else {
			cout << "Error";
		}
		return;
		*/
}