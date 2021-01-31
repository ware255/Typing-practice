#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

int typing();

int test1();
int test2();

char word[256];

int main()
{
	char test;
	cout << "Hello, typist!\n\n" << endl;
	cout << "Press the y key to execute." << endl;
	cin >> test;

	if (test == 'y' || test == 'Y') {
		typing();
	}
	else if (cin.fail()){
		cin.ignore(1024, '\n');
		exit(0);
	}
	return 0;
}

int typing()
{
	srand(time(NULL));

	int i;
	int vi = rand() % 2 + 1;

	for (int i = 0; i < 1; ++i) {
		if (vi == 1) {
			test1();
		}
		else if (vi == 2) {
			test2();
		}
		else {
			exit(0);
		}
	}

	return 0;
}

int test1()
{
	int i;
	int id = rand() % 2 + 1;
	for (i = 0;i < 1;++i) {
		if (id == 1) {
			cout << "おはよう" << endl;
			cin >> word;
				if (!strcmp(word, "おはよう")) {
					cout << "Good!" << endl;
				}
				else {
					cout << "Bad!" << endl;
				}
		if(id == 2) {
				cout << "こんにちは" << endl;
				cin >> word;
					if (!strcmp(word, "こんにちは")) {
						cout << "Good!" << endl;
					}
					else {
						cout << "Bad!" << endl;
					}
				}
			}
		}
		int id1 = rand() % 2 + 1;
		for (i = 0;i < 1;++i) {
			if (id1 == 1) {
				cout << "さようなら" << endl;
				cin >> word;
				if (!strcmp(word, "さようなら")) {
					cout << "Good!" << endl;
				}
				else {
					cout << "Bad!" << endl;
				}
			}
			if (id1 == 2) {
				cout << "こんばんは" << endl;
				cin >> word;
				if (!strcmp(word, "こんばんは")) {
					cout << "Good!" << endl;
				}
				else {
					cout << "Bad!" << endl;
				}
			}
		}
		int id2 = rand() % 2 + 1;
		for (i = 0;i < 1;++i) {
			if (id2 == 1) {
				cout << "おやすみ" << endl;
				cin >> word;
				if (!strcmp(word, "おやすみ")) {
					cout << "Good!" << endl;
				}
				else {
					cout << "Bad!" << endl;
				}
			}
			if (id2 == 2) {
				cout << "ねむたい" << endl;
				cin >> word;
				if (!strcmp(word, "ねむたい")) {
					cout << "Good!" << endl;
				}
				else {
					cout << "Bad!" << endl;
				}
			}
		}

	return 0;
}

int test2()
{
	cout << "hello" << endl;
	cin >> word;
	if (!strcmp(word, "hello")) {
		cout << "Good!" << endl;
	}
	else {
		cout << "Bad!" << endl;
	}
	cout << "Good evening." << endl;
	cin >> word;
	if (!strcmp(word, "exploit")) {
		cout << "Good!" << endl;
	}
	else {
		cout << "Bad!" << endl;
	}
	cout << "４ね" << endl;
	cin >> word;
	if (!strcmp(word, "４ね")) {
		cout << "Bad!" << endl;
	} else {
		cout << "BAD!" << endl;
	}
	return 0;
}
