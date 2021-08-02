/*
	C言語寄りの書き方になってしまいましたが許してください。
*/

#include <iostream>
#include <string>
//#include <chrono>
//#include <thread>
#include <ctime>
#include <Windows.h>//Linuxの場合は削除しておいてください。

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
				Sleep(10);
				//std::this_thread::sleep_for(std::chrono::seconds(1));
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "こんにちは" << std::endl;
			std::getline(std::cin, word);
			if (word == "こんにちは") {
				std::cout << "Good!" << std::endl;
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
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
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "こんばんわ" << std::endl;
			std::getline(std::cin, word);
			if (word == "こんばんわ") {
				std::cout << "Good!" << std::endl;
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
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
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "ねむたい" << std::endl;
			std::getline(std::cin, word);
			if (word == "ねむたい") {
				std::cout << "Good!\n\n終わり！" << std::endl;
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	}
	std::cin.get();
	return;
}

void test2()
{
	int q;
	srand((unsigned)time(NULL));
	switch (rand() % 2 + 1) {
	case 1:
		for (q = 0; q < 3; q++) {
			std::cout << "hello" << std::endl;
			std::getline(std::cin, word);
			if (word == "hello") {
				std::cout << "Good!" << std::endl;
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "script" << std::endl;
			std::getline(std::cin, word);
			if (word == "script") {
				std::cout << "Good!" << std::endl;
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
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
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "HELLO" << std::endl;
			std::getline(std::cin, word);
			if (word == "HELLO") {
				std::cout << "Good!" << std::endl;
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
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
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "LINUX" << std::endl;
			std::getline(std::cin, word);
			if (word == "LINUX") {
				std::cout << "" << std::endl;
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
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
				Sleep(10);
				system("cls");
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	case 2:
		for (q = 0; q < 3; q++) {
			std::cout << "metasploit-framework" << std::endl;
			std::getline(std::cin, word);
			if (word == "metasploit-framework") {
				std::cout << "Good!\n\n終わり！" << std::endl;
				break;
			}
			else if (word.empty() == 0) {
				std::cout << "Bad!" << std::endl;
				Sleep(10);
				system("cls");
			}
		}
	default:
		break;
	}
	std::cin.get();
	return;
}

/*
void test3()
{
	srand((unsigned)time(NULL));
	switch (rand() % 2 + 1) {
	case 1:
		cout << "" << endl;
	case 2:
		cout << "" << endl;
	default:
		break;
	}
	return;
}
*/

void typing() {
	void(*F_test1)() = &test1;
	void(*F_test2)() = &test2;
	std::srand((unsigned)time(nullptr));
	switch (rand() % 2 + 1) {
	case 1:
		(*F_test1)();
		break;
	case 2:
		(*F_test2)();
		break;
	default:
		break;
	}
	return;
}

int main() {
	::SetConsoleTitle(TEXT("Typing-practice"));//Linuxの場合は削除対象です。
	std::cout << "Hello, typist!" << std::endl;
	std::cout << "The number of times cannot be set at the moment.\n" <<
	"Wait a second after the \"Good!\" message appears. It's a bug.\n\n" << std::endl;
	std::cout << "Press the Enter key." << std::endl;
	std::cin.get();
	system("cls");//linuxでは、system("clear");に変えて使用してね。
	void(*F_typing)() = &typing;
	(*F_typing)();
	return 0;
}
