#include "utils.h"

int optionSelect(std::string options[]) {
    int cIndex = 0;
    
    while (options[cIndex] != "") {
        std::cout << cIndex + 1 << ": " << options[cIndex] << std::endl;
        cIndex++;
    }

    int option;

    std::cout << "\n> ";
    std::cin >> option;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return -1;
    }

    return option;
}

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}