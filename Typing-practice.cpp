#include <iostream>
#include <iomanip>
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
	char test[2];
	cout << "Hello, typist!\n\n" << endl;
	cout << "Press the y key to execute." << endl;
	cin >> setw(2) >> test;

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
				cin >> setw(256) >> word;
					if (word == v1) {
						cout << "Good!" << endl;
						cin.ignore(4024, '\n');
						break;
					}
					else {
						cout << "Bad!" << endl;
						cin.ignore(4024, '\n');
					}
				}
		if(id == 2) {
			for (q = 0;q < 3;q++) {
				cout << "こんにちは" << endl;
				cin >> setw(256) >> word;
					if (word == v2) {
						cout << "Good!" << endl;
						cin.ignore(4024, '\n');
						break;
					}
					else {
						cout << "Bad!" << endl;
						cin.ignore(4024, '\n');
					}
				}
				}
			}
		}
		for (i = 0;i < 1;++i) {
			if (id1 == 1) {
				for (q = 0;q < 3;q++) {
					cout << "さようなら" << endl;
					cin >> setw(256) >> word;
					if (word == v3) {
						cout << "Good!" << endl;
						cin.ignore(4024, '\n');
						break;
					}
					else {
						cout << "Bad!" << endl;
						cin.ignore(4024, '\n');
					}
				}
			}
			if (id1 == 2) {
				for (q = 0;q < 3;q++) {
					cout << "こんばんは" << endl;
					cin >> setw(256) >> word;
					if (word == v4) {
						cout << "Good!" << endl;
						cin.ignore(4024, '\n');
						break;
					}
					else {
						cout << "Bad!" << endl;
						cin.ignore(4024, '\n');
					}
				}
			}
		}
		for (i = 0;i < 1;++i) {
			if (id2 == 1) {
				for (q = 0;q < 3;q++) {
					cout << "おやすみ" << endl;
					cin >> setw(256) >> word;
					if (word == v5) {
						cout << "Good!" << endl;
						cin.ignore(4024, '\n');
						break;
					}
					else {
						cout << "Bad!" << endl;
						cin.ignore(4024, '\n');
					}
				}
			}
			if (id2 == 2) {
				for (q = 0;q < 3;q++) {
					cout << "ねむたい" << endl;
					cin >> setw(256) >> word;
					if (word == v6) {
						cout << "Good!" << endl;
						cin.ignore(4024, '\n');
						cin.get();
						break;
					}
					else {
						cout << "Bad!" << endl;
						cin.ignore(4024, '\n');
						cin.get();
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
			cin >> setw(256) >> word;
			if (word == a1) {
				cout << "Good!" << endl;
				cin.ignore(4024, '\n');
				break;
			}
			else {
				cout << "Bad!" << endl;
				cin.ignore(4024, '\n');
			}
		}
		else if (id == 2) {
			cout << "HELLO" << endl;
			cin >> setw(256) >> word;
			if (word == a2) {
				cout << "Good!" << endl;
				cin.ignore(4024, '\n');
				break;
			}
			else {
				cout << "Bad!" << endl;
				cin.ignore(4024, '\n');
			}
		}
	}
	int id1 = rand() % 2 + 1;
	for (i = 0;i < 1;++i) {
		for (q = 0;q < 3;q++) {
			if (id1 == 1) {
				cout << "linux" << endl;
				cin >> setw(256) >> word;
				if (word == a3) {
					cout << "Good!" << endl;
					cin.ignore(4024, '\n');
					break;
				}
				else {
					cout << "Bad!" << endl;
					cin.ignore(4024, '\n');
				}
			}
		}
		if (id1 == 2) {
			for (q = 0;q < 3;q++) {
				cout << "ifconfig" << endl;
				cin >> setw(256) >> word;
				if (word == a4) {
					cout << "Good!" << endl;
					cin.ignore(4024, '\n');
					break;
				}
				else {
					cout << "Bad!" << endl;
					cin.ignore(4024, '\n');
				}
			}
		}
	}
	int id2 = rand() % 2 + 1;
	for (i = 0;i < 1;++i) {
		if (id2 == 1) {
			for (q = 0;q < 3;q++) {
				cout << "metasploit-framework" << endl;
				cin >> setw(256) >> word;
				if (word == a5) {
					cout << "Good!" << endl;
					cin.ignore(4024, '\n');
					cin.get();
					break;
				}
				else {
					cout << "Bad!" << endl;
					cin.ignore(4024, '\n');
					cin.get();
					break;
				}
			}
		}
	}
	return 0;
}
