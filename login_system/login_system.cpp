#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string email, pass;
	std::ifstream file("data.txt");
	std::cout << "Enter email: " << std::endl;
	std::cin >> email;
	std::cout << "Enter password: " << std::endl;
	std::cin >> pass;
	std::string temp;
	bool eFind = 0, pFind = 0;
	while (getline(file, temp)) {
		if (temp == email)eFind = 1;
		if (temp == pass)pFind = 1;
	}
	if (eFind == 1 && pFind == 1)std::cout << "Login succesful";
	else std::cout << "Failed login";
}