#ifndef FASF_HPP
#define FASF_HPP

#include <vector>
#include <string>
#include <iostream>

namespace FASF {
    int numElementIs = 0;
    std::string option = "";
    bool elementFound = false;
    namespace vector {
        // Function template for scanning a vector for a specific value
        template <typename T>
		void scan(const std::vector<T>& vec, const T& element) { //get vector and element to search for
            for (int i = 0; i <= vec.size(); i++) {
                if (vec.at(i) == element) { //check if element is found
                    elementFound = true; 
                    numElementIs = i;
					std::cout << "Element found at index: " << i << std::endl;
                    break;
                }
                else {
                    continue;
                }
            }
            if (!elementFound) {
				std::cout << "Element not found in the vector." << std::endl;
            }
            else {
                std::cout << "Element found in index #: " << numElementIs << std::endl;
            }
			std::cout << "Would you like a list of all elements in the vector? (Y/N): ";
            std::getline(std::cin, option);
            if (option == "Y" || option == "y") {
                for (int j = 0; j <= vec.size(); j++) {
                    std::cout << vec.at(j) << std::endl;
                }
            }
            else if (option == "N" || option == "n") {
                
            }
            else {
				std::cout << "Invalid option. Please enter Y or N." << std::endl;
            }
        }
    }
}

#endif // FSAF_HPP
