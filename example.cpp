#include <vector>
#include "FSAF.hpp"
#include <string>

int main() {

	std::vector<std::string> carBrands = {"Ford", "BMW", "Fiat", "Tesla", "Ferrari", "Renault", "Toyota"};

	std::vector<int> integerArray{ 1, 3, 199, 781, 5151, 5643, 0 };

	//FSAF::vector::scan<std::string>(carBrands, "Fiat");

	FSAF::vector::scan<int>(integerArray, 781);

	return 0;
}