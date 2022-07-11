#include <iostream>

int main() {

	int Min;
	int Max;

	int randomNumber;

	std::cout << "This is a random number generator. Please press enter to continue." << std::endl;
	system("pause");

	std::cout << "Please enter your minimum number." << std::endl;
	std::cout << "User Answer: ";
	std::cin >> Min;

	std::cout << "Please enter your maximum number." << std::endl;
	std::cout << "User Answer: ";
	std::cin >> Max;

	randomNumber = rand() % Max + Min;

	std::cout << "Here is your result: " << randomNumber << "." << std::endl;

	system("pause");

}
