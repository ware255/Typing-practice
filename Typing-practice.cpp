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
	else {
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
	}

	return 0;
}

int test1()
{
	cout << "こんにちは" << endl;
	cin >> word;
	if (!strcmp(word, "こんにちは")) {
		cout << "Good!" << endl;
	}
	else {
		cout << "Bad!" << endl;
	}
	cout << "こんばんは" << endl;
	cin >> word;
	if (!strcmp(word, "こんばんは")) {
		cout << "Good!" << endl;
	}
	else {
		cout << "Bad!" << endl;
	}
	cout << "４ね" << endl;
	cin >> word;
	if (!strcmp(word, "４ね")) {
		cout << "Gooodd!" << endl;
	}
	else {
		cout << "Bad!! FUCK YOU!!!" << endl;
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
		cout << "Gooodd!" << endl;
	}
	else  {
		cout << "Bad!! FUCK YOU!!!" << endl;
	}
	return 0;
}
