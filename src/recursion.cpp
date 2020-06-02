#include <iostream>

long shiftDigitR(const long);

int main()
{
    constexpr long number = 123456789; 
    std::cout << "Demo recursive function" << std::endl;
    std::cout << "N: " << number << std::endl;
    std::cout << shiftDigitR(number) << std::endl;
}

long shiftDigitR(const long num)
{
    if (num <= 1)
        return 1;
    else
    {       
        std::cout << num - (num / 10) * 10  << ' ';
        return shiftDigitR(num / 10);
    }
    std::cout << '\n';
}
