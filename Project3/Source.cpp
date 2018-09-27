#include <iostream>

int funct(double n) {
	if (n == 1) 
		return 1;
	if (n > 1 && n < 2) 
		return 0;
	return funct(n / 2);
	
}

int main()
{
	double number;
	std::cout << "Enter Number: - ";
	std::cin >> number;
	funct(number);
	funct(number) == 1 ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
	system("pause");
	return 0;
}
