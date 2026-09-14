#include <iostream>
using namespace std;


class students {
public:
	string username;
	int score = 0;

	students(string username){
		cout << "let's begin\n";
	}

	void question1() {
		char answer;
		cout << "What does OOP stand for?\n";
		cout << " a) Object Oriented Programming\n";
		cout << " b) Only One Program\n";
		cout << " c) Open Output Protocol\n";
		cout << "Your answer: ";
		cin >> answer;
		if (answer == 'a'||answer=='A') {
			cout << "Correct!\n";
			score++;
		}

		else
			cout << "Wrong! Correct answer: a\n";

	}
	void question2() {
		char answer;
		cout << "Which keyword defines a class in C++?\n";
		cout << " a) function\n";
		cout << " b) class\n";
		cout << " c) struct only\n";
		cout << "Your answer: ";
		cin >> answer;
		if (answer == 'b'|| answer == 'B') {
			cout << "Correct!\n";
			score++;
		}
		else
			cout << "Wrong! Correct answer: b\n";
	}

	void question3() {
		char answer;
		cout << "What is the Object?\n";
		cout << " a) template\n";
		cout << " b) blueprint\n";
		cout << " c) instance of a class\n";
		cout << "Your answer: ";
		cin >> answer;
		if (answer == 'c'|| answer == 'C') {
			cout << "Correct!\n";
			score++;
		}
		else
			cout << "Wrong! Correct answer: c\n";
	}

	void question4() {
		char answer;
		cout << "Does the constructor take parameters?\n";
		cout << " a) Yes\n";
		cout << " b) No\n";
		cout << "Your answer: ";
		cin >> answer;
		if (answer == 'a'|| answer == 'A') {
			cout << "Correct!\n";
			score++;
		}
		else
			cout << "Wrong! Correct answer: a\n";
	}
	void question5() {
		char answer;
		cout << "Does the destructor take parameters?\n";
		cout << " a) Yes\n";
		cout << " b) No\n";
		cout << "Your answer: ";
		cin >> answer;
		if (answer == 'b'|| answer == 'B') {
			cout << "Correct!\n";
			score++;
		}
		else
			cout << "Wrong! Correct answer: b\n";
	}
	
};
void quiz(students student) {

	cout << "Answer a quiz consists of five questions: \n";
	for (int i = 1; i <= 5; i++) {
		cout << "Question: " << i << '\n';
		if (i == 1)
			student.question1();
		if (i == 2)
			student.question2();
		if (i == 3)
			student.question3();
		if (i == 4)
			student.question4();
		if (i == 5)
			student.question5();
		cout << "--------------------------------------------\n";
	}
	cout << "========= Quiz Complete =========\n";
	cout << "score: " << student.score << " / 5\n";
}

int main() {
	char letter;
	cout << "======================= Quiz App =========================\n";
	cout << "Enter Your Userame: \n";
	string name;
	cin >> name;
	students s1(name);
	cout << "Enter s for start to begin: \n";
	cin >> letter;
	if (letter != 's' && letter != 'S') {
		cout << "Invalid letter!   click (s) to begin the Quiz\n";
		cin >> letter;
		if (letter == 's' || letter == 'S')
			quiz(s1);
		else {
			cout << "You are out\n";
			return 0;
		}
	}
	else {
		quiz(s1);
	}




	return 0;
}