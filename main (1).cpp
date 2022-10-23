/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int factorial(int n)
{
    if(n <= 1)  // Базовый случай
    {
        return 1;
    }
    return n  * factorial(n - 1); //рекурсивеый вызов с другим аргументом
}

void reverseBinary(int n)
{
    if (n == 0)  // Базовый случай
    {
        return;
    }
    cout << n%2;
    reverseBinary(n/2); //рекурсивеый вызов с другим аргументом
}
// Печатает бинарное представление числа в обратном порядке

void forvardBinary(int n)
{
    if (n == 0)  // Базовый случай
    {
        return;
    }
    forvardBinary(n/2); //рекурсивеый вызов с другим аргументом
    cout << n%2;
}


void ReverseForvardBinary(int n)
{
    if (n == 0)  // Базовый случай
    {
        return;
    }
    cout << n%2; // печатает в обратном порядке
    ReverseForvardBinary(n/2); //рекурсивеый вызов с другим аргументом
    cout << n%2;
}



int product(int x, int y)
{
    if (y == 0)  // Базовый случай
    {
        return 0;
    }
    return (x + product(x, y-1)); //рекурсивеый вызов с другим аргументом
}
int main()
{
    
}
