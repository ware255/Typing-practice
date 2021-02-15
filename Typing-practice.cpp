#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int typing();

int test1();
int test2();

char word[256];

int main()
{
	char test;
	cout << "Hello, typist!" << endl;
	cout << "回数は今のところ設定できません。固定でn回\n\n" << endl;
	cout << "Press the Enter key." << endl;
	cin.get();
	typing();
	return 0;
}

int typing()
{
	srand(time(NULL));

	int i;
	int vi = rand() % 2 + 1;

	switch (vi) {
	case 1:
		test1();
		break;
	case 2:
		test2();
		break;
	}

	return 0;
}

int test1()
{
	int i;
	int q;
	int id = rand() % 2 + 1;
	int id1 = rand() % 2 + 1;
	int id2 = rand() % 2 + 1;
	string v1 = "おはよう";
	string v2 = "こんにちは";
	string v3 = "さようなら";
	string v4 = "こんばんは";
	string v5 = "おやすみ";
	string v6 = "ねむたい";
	switch (id) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "おはよう" << endl;
			cin >> word;
			if (word == v1) {
				cout << "Good!" << endl;
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "こんにちは" << endl;
			cin >> word;
			if (word == v2) {
				cout << "Good!" << endl;
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 1:
		for (q = 0;q < 3;q++) {
			cout << "さようなら" << endl;
			cin >> word;
			if (word == v3) {
				cout << "Good!" << endl;
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 2:
		for (q = 0;q < 3;q++) {
			cout << "こんばんは" << endl;
			cin >> word;
			if (word == v4) {
				cout << "Good!" << endl;
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id2) {
	case 1:
		for (q = 0;q < 3;q++) {
			cout << "おやすみ" << endl;
			cin >> word;
			if (word == v5) {
				cout << "Good!" << endl;
				cin.get();
				cin.ignore(4024, '\n');
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id2) {
	case 2:
		for (q = 0;q < 3;q++) {
			cout << "ねむたい" << endl;
			cin >> word;
			if (word == v6) {
				cout << "Good!" << endl;
				cin.get();
				cin.ignore(1024, '\n');
				break;
			}
			else {
				cout << "Bad!" << endl;
				cin.get();
				cin.ignore(1024, '\n');
			}
		}
	}
	return 0;
}

int test2()
{
	int i;
	int q;
	int id = rand() % 2 + 1;
	int id1 = rand() % 2 + 1;
	int id2 = rand() % 2 + 1;
	string a1 = "hello";
	string a2 = "HELLO";
	string a3 = "linux";
	string a4 = "ifconfig";
	string a5 = "metasploit-framework";
	switch (id) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "hello" << endl;
			cin >> word;
			if (word == a1) {
				cout << "Good!" << endl;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "HELLO" << endl;
			cin >> word;
			if (word == a2) {
				cout << "Good!" << endl;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "linux" << endl;
			cin >> word;
			if (word == a3) {
				cout << "Good!" << endl;
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "ifconfig" << endl;
			cin >> word;
			if (word == a4) {
				cout << "Good!" << endl;
				break;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id2) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "metasploit-framework" << endl;
			cin >> word;
			if (word == a5) {
				cout << "Good!" << endl;
				int exit;
				exit = cin.get();
				cin.ignore(1024, '\n');
				break;
			}
			else {
				cout << "Bad!" << endl;
				int exit1;
				exit1 = cin.get();
				cin.ignore(1024, '\n');
				break;
			}
		}
	}
	return 0;
}
