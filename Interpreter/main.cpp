#include "RomanNumInterpreter.h"

int main()
{
    RNInterpreter interpreter;
    char input[20];
    std::cout << "Enter Roman Numeral: ";
    while (std::cin >> input)
    {
        std::cout << "   interpretation is " << interpreter.interpret(input) << std::endl;
        std::cout << "Enter Roman Numeral: ";
    }

    return 0;
}