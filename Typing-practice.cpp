/*
	C言語寄りの書き方になってしまいましたが許してください。
*/

#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

std::string word;

void test1()
{
	int q;
	std::srand((unsigned)time(NULL));
	switch (rand() % 2 + 1) {
	case 1:
		for (q = 0; q < 3; q++) {
			std::cout << "おはよう" << std::endl;
			std::getline(std::cin, word);
			if (word == "おはよう") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "こんにちは" << std::endl;
			std::getline(std::cin, word);
			if (word == "こんにちは") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
	case 1:
		for (q = 0; q < 3; q++) {
			std::cout << "さようなら" << std::endl;
			std::getline(std::cin, word);
			if (word == "さようなら") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "こんばんは" << std::endl;
			std::getline(std::cin, word);
			if (word == "こんばんは") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
	case 1:
		for (q = 0; q < 3; q++) {
			std::cout << "おやすみ" << std::endl;
			std::getline(std::cin, word);
			if (word == "おやすみ") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	}
	switch (rand() % 2 + 1) {
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "ねむたい" << std::endl;
			std::getline(std::cin, word);
			if (word == "ねむたい") {
				std::cout << "Good!" << std::endl;
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	}
    std::cout << "\n終わりましたので、Enterを押して終了してください。" << std::endl;
	std::cin.get();
	return;
}

void test2()
{
	int q;
	std::srand((unsigned)time(NULL));
	switch (rand() % 2 + 1) {
	case 1:
		for (q = 0; q < 3; q++) {
			std::cout << "hello" << std::endl;
			std::getline(std::cin, word);
			if (word == "hello") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "script" << std::endl;
			std::getline(std::cin, word);
			if (word == "script") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
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
			std::cout << "Fuck" << std::endl;
			std::getline(std::cin, word);
			if (word == "Fuck") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "HELLO" << std::endl;
			std::getline(std::cin, word);
			if (word == "HELLO") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
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
			std::cout << "linux" << std::endl;
			std::getline(std::cin, word);
			if (word == "linux") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "LINUX" << std::endl;
			std::getline(std::cin, word);
			if (word == "linux") {
				std::cout << "" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
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
			std::cout << "ifconfig" << std::endl;
			std::getline(std::cin, word);
			if (word == "ifconfig") {
				std::cout << "Good!" << std::endl;
				sleep(1);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "metasploit-framework" << std::endl;
			std::getline(std::cin, word);
			if (word == "metasploit-framework") {
				std::cout << "Good!" << std::endl;
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				sleep(1);
				system("cls");
			}
		}
	default:
		break;
	}
    std::cout << "\n終わりましたので、Enterを押して終了してください。" << std::endl;
	std::cin.get();
	return;
}

void typing()
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

	return -1;
}

int main()
{
	std::cout << "Hello, typist!" << std::endl;
	std::cout << "回数は今のところ設定できません。固定でn回\n\n" << std::endl;
	std::cout << "Press the Enter key." << std::endl;
	std::cin.get();
	system("cls");//linuxでは、system("clear");に変えて使用してね。
	void(*Typing)() = &typing;
	(*Typing)();
	return 1;
}
