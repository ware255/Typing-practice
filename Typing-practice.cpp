#include <iostream>
#include <string>
#include <random>
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
	cout << "Hello, typist!\n\n" << endl;
	cout << "Press the y key to execute." << endl;
	cin >> test;

	if (test == 'y' || test == 'Y') {
		typing();
	}
	else if (cin.bad()){
		cin.clear();
		cin.ignore(1024, '\n');
		exit(0);
	}
	return 0;
}

int typing()
{
	srand(time_t(NULL));

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
	for (i = 0;i < 1;++i) {
		if (id == 1) {
			for (q = 0;q < 3;q++) {
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
		if(id == 2) {
			for (q = 0;q < 3;q++) {
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
			}
		}
		for (i = 0;i < 1;++i) {
			if (id1 == 1) {
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
			if (id1 == 2) {
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
		}
		for (i = 0;i < 1;++i) {
			if (id2 == 1) {
				for (q = 0;q < 3;q++) {
				cout << "おやすみ" << endl;
				cin >> word;
				if (word == v5) {
					cout << "Good!" << endl;
					break;
				}
				else {
					cout << "Bad!" << endl;
				}
			}
			}
			if (id2 == 2) {
				for (q = 0;q < 3;q++) {
				cout << "ねむたい" << endl;
				cin >> word;
				if (word == v6) {
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
				}
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
	string a1 = "hello";
	string a2 = "HELLO";
	string a3 = "linux";
	string a4 = "ifconfig";
	string a5 = "metasploit-framework";
	for (i = 0;i < 1;++i) {
		if (id == 1) {
			cout << "hello" << endl;
			cin >> word;
			if (word == a1) {
				cout << "Good!" << endl;
			}
			else {
				cout << "Bad!" << endl;
			}
		}
		else if (id == 2) {
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
	int id1 = rand() % 2 + 1;
	for (i = 0;i < 1;++i) {
		for (q = 0;q < 3;q++) {
		if (id1 == 1) {
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
		if (id1 == 2) {
			for (q = 0;q < 3;q++) {
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
}
	int id2 = rand() % 2 + 1;
	for (i = 0;i < 1;++i) {
		if (id2 == 1) {
			for (q = 0;q < 3;q++) {
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
}
	return 0;
}
