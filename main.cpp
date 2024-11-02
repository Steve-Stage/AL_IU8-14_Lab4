#include <iostream>
#include <cstdlib>
#include "lab04.hpp"

int main()
{
	std::vector<std::string> arr = { "Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?" };
	std::string str = join(arr, " ");
	std::cout << str << std::endl;
	std::system("pause");
	return 0;
}