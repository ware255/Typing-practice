#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

int typing();

int main()
{
	char test;
	cout << "Hello, typist!\n\n" << endl;
	cout << "Press the y key to execute." << endl;
	cin >> test;

	if (test == 'y' || test == 'Y') {
		typing();
	}
	else {
		exit(0);
	}
	return 0;
}

int typing()
{
	system("cls");
	srand(time(NULL));
	int i;
	int ii = rand() % 6;
	char word[256];
	for (i = 0; i <= 5; ++i) {
		if (ii <= 1) {
			cout << "Hello\n" << endl;
			cin >> word;
			if (!strcmp(word, "Hello")) {
				cout << "Good!\n" << endl;
			}
			else {
				cout << "Bad!\n" << endl;
			}
		}
		else if (ii <= 2) {
			cout << "Fuck" << endl;
			cin >> word;
			if (!strcmp(word, "Fuck")) {
				cout << "Good!\n" << endl;
			}
			else {
				cout << "Bad!\n" << endl;
			}
		}
		else if (ii <= 3) {
			cout << "Exploit" << endl;
			cin >> word;
			if (!strcmp(word, "Exploit")) {
				cout << "Good!\n" << endl;
			}
			else {
				cout << "Bad!\n" << endl;
			}
		}
		else if (ii <= 4) {
			cout << "Hacker" << endl;
			cin >> word;
			if (!strcmp(word, "Hacker")) {
				cout << "Good!\n" << endl;
			}
			else {
				cout << "Bad!\n" << endl;
			}
		}
		else if (ii <= 5) {
			cout << "Metasploit" << endl;
			cin >> word;
			if (!strcmp(word, "Metasploit")) {
				cout << "Good!\n" << endl;
			}
			else {
				cout << "Bad!\n" << endl;
			}
		}
		else {
			exit(0);
		}
	}
	cout << "おしまい。" << endl;

	system("pause");
	return 0;
}
