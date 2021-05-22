#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using std::cout, std::endl;

string word;

void test1()
{
	int q;
	std::srand((unsigned)time(NULL));
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	}
	cin.get();
	return;
}

void test2()
{
	int q;
	srand(time(NULL));
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "script" << endl;
			getline(cin, word);
			if (word == "script") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
				sleep(1);
				system("cls");
			}
		}
	default:
		break;
	}
	switch (rand() % 2 + 1) {
	case 1:
		for (q = 0; q < 3; q++) {
			cout << "Fuck" << endl;
			getline(cin, word);
			if (word == "Fuck") {
				cout << "Good!" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
				sleep(1);
				system("cls");
			}
		}
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
				sleep(1);
				system("cls");
			}
		}
	default:
		break;
	}
	switch (rand() % 2 + 1) {
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
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "LINUX" << endl;
			getline(cin, word);
			if (word == "linux") {
				cout << "" << endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
				sleep(1);
				system("cls");
			}
		}
	default:
		break;
	}
	switch (rand() % 2 + 1) {
	case 1:
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
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			cout << "metasploit-framework" << endl;
			getline(cin, word);
			if (word == "metasploit-framework") {
				cout << "Good!" << endl;
				break;
			}
			else if (word.empty() == 0) {
				cout << "Bad!" << endl;
				sleep(1);
				system("cls");
			}
		}
	default:
		break;
	}
	cin.get();
	return;
}

int typing()
{
	std::srand((unsigned)time(NULL));
	switch (rand() % 2 + 1) {
	case 1:
		test1();
		break;
	case 2:
		test2();
		break;
	default:
		break;
	}

	return 0;
}

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
