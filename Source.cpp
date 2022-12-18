#include <iostream>
#include <cmath>
#include <string>

int MatAction(int a, int b, char c) {
	int result{};
	std::cout << "enter number one\n";
	std::cin >> a;
	std::cout << "enter number two\n";
	std::cin >> b;
	std::cout << "enter math_action (+, -, x, /)\n";
	std::cin >> c;
	if (c == '+') {
		result = a + b;
	}
	if (c == '-') {
		result = a - b;
	}
	if (c == 'x') {
		result = a * b;
	}
	if (c == '/') {
		result = a / b;
	}
	std::cout << "result = " << result << '\n';
	return result;
}

void Concat(char word1, char word2) {
	std::cout << "enter word one\n";
	std::cin >> word1;
	std::cout << "enter word two\n";
	std::cin >> word2;
	std::cout << "result - " << word1 << word2 << '\n';
	return;
}

int Pow(int a) {
	int result; 
	std::cout << "enter any number\n";
	std::cin >> a;
	result = pow(a, 2);
	std::cout << "result = " << result << '\n';
	return result;
}
void Help_() {
	const char* line = new char[200];
	line = "Инструкция: команда +54 позволяет произвести математическе действия над целыми числами, следуйте указаниям.Команда concat сращивает строки для вывода на экран.....";
	std::cout << line;
}


int main(int argc, char** argv) {

	const char* str = new char[3];
	str = "+54";
	const char* str1 = new char[6];
	str1 = "concat";
	const char* str2 = new char[3];
	str2 = "xx5";
	const char* str3 = new char[4];
	str3 = "help";

	if (argc > 1) {
		for (int i = 0; i < argc; i++) {
			if (std::string(argv[i]) == "+54") {
				int a{};
				int b{};
				char c{};
				MatAction(a, b, c);
			}
			if (std::string(argv[i]) == "concat") {
				char *word1 = new char[100];
				char *word2 = new char[100];
				std::cout << "enter word one\n";
				std::cin >> word1;
				std::cout << "enter word two\n";
				std::cin >> word2;
				std::cout << "result - " << word1 << word2 << '\n';
			}
			if (std::string(argv[i]) == "xx5") {
				int m{};
				Pow(m);
			}
			if (std::string(argv[i]) == "help") {
				Help_();
			}
		}
	}
}
