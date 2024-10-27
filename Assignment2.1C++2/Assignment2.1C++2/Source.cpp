//Libraries
#include <iostream>
#include <String>
#include <fstream>


using namespace std;

//Main Integer
int main()
{
	bool finished = false;
	char input;
	string line;
	ifstream infile("Requests.txt");
	ofstream outfile("Reminders.txt");


	while (finished == false)
	{
			cout << "Welcome to circle internet! \n";
	cout << "What would you like to do today? (U to update list, R to remind the user, E to exit) \n";
	cin >> input;
	input = toupper(input);

	if (input == 'U')
	{
		if (infile.is_open())
		{
			if (outfile.is_open())
			{
				while (getline(infile, line)) {
					cout << line << "\n";
					outfile << line << "\n";
				}
				infile.close();
				outfile.close();
			}
			else {
				cout << "Unable to open output file, please try again. \n";
			}
		}
		else {
			cout << "Unable to open the input file, please try again. \n";
		}

	}

	if (input == 'R')
	{

		if (outfile.is_open())
		{
			outfile << line << "\n";
		}
		else
		{
			outfile << line << "\n";
		}
		outfile.close();
	}

	if (input == 'E')
	{
		cout << "have a good day! \n";
		finished = true;
	}
	}


	return 0;
}