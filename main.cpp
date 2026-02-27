#include <iostream>

void sum();

int main()
{

    sum();
    return 0;
}

void sum()
{
    // This function is intentionally left unused to demonstrate the .gitignore file

    int a = 5;
    int b = 11;
    int sum = a + b;

    std::cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
}