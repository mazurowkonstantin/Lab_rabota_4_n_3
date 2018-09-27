#include <iostream>

void funct(double n) {
	if (n == 1) {
		std::cout << "Yes" << std::endl;
	} 
	else if (n > 1 && n < 2) {
		std::cout << "No" << std::endl;
	} 
	else 
		funct(n / 2);
}

int main()
{
	int n;
	std::cout << "Enter N: - ";
	std::cin >> n;
	funct(n);
	system("pause");
	return 0;
}
