#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int typing();

int test1();
int test2();

string word;

int main()
{
	cout << "Hello, typist!" << endl;
	cout << "回数は今のところ設定できません。固定でn回\n\n" << endl;
	cout << "Press the Enter key." << endl;
	cin.get();
	system("cls");//linuxでは、system("clear");に変えて使用してね。
	typing();
	return 0;
}

int typing()
{
	srand(time(NULL));
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
	int q;
	int id = rand() % 2 + 1;
	int id1 = rand() % 2 + 1;
	int id2 = rand() % 2 + 1;
	switch (id) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "おはよう" << endl;
			getline(cin, word);
			if (word == "おはよう") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "こんにちは" << endl;
			getline(cin, word);
			if (word == "こんにちは") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "さようなら" << endl;
			getline(cin, word);
			if (word == "さようなら") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "こんばんは" << endl;
			getline(cin, word);
			if (word == "こんばんは") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id2) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "おやすみ" << endl;
			getline(cin, word);
			if (word == "おやすみ") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id2) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "ねむたい" << endl;
			getline(cin, word);
			if (word == "ねむたい") {
				cout << "Good!" << endl;
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	cin.get();
	return 0;
}

int test2()
{
	int q;
	int id = rand() % 2 + 1;
	int id1 = rand() % 2 + 1;
	switch (id) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "hello" << endl;
			getline(cin, word);
			if (word == "hello") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "HELLO" << endl;
			getline(cin, word);
			if (word == "HELLO") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "linux" << endl;
			getline(cin, word);
			if (word == "linux") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	switch (id1) {
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "ifconfig" << endl;
			getline(cin, word);
			if (word == "ifconfig") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	if (true) {
		for (q = 0; q < 3; q++) {
			cout << "metasploit-framework" << endl;
			getline(cin, word);
			if (word == "metasploit-framework") {
				cout << "Good!" << endl;
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
			}
		}
	}
	cin.get();
	return 0;
}
