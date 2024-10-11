//Assignment 5 Math Quiz
//Isaiah Doran

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector<string> allProblems;
	string problem;
	ifstream ifs("C:\\Temp\\Problems.txt");
	while (getline(ifs, problem)) 
	{
		allProblems.push_back(problem);
	};
	ifs.close();
	// call this once before you call rand()
	srand(time(NULL)); // initialize the random number generator

	// get a random number between 1 & 10

	ofstream ofs("C:\\Temp\\QuizResults.txt");

	for (int i = 0; i < 3; i++) {
		string answer;
		int randomNumber = rand() % 10 + 1;
		cout << "Question " << i+1 << ": " << allProblems[randomNumber - 1] << "\n";
		cout << "Your Answer: ";
		cin >> answer;
		ofs << allProblems[randomNumber - 1] << " = " << answer << "\n";

	}
	ofs.close();

	
	






	(void)_getch();
	return 0; 
}