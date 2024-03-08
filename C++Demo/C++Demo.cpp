// C++Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 1;
    int y = 28;

    for (int i = 0; i <= 29; i++)
    {
        for (int j = 0; j <= 29; j++)
        {
            if (j == 0|| i==0 || i==29 || j == 29)
            {
                if (j == 29)
                {
                    std::cout << "x " << std::endl;
                }
                else
                {
                    std::cout << "x ";
                }
            }
            else
            {
                if (j == x || j == y || j == x+1|| j==x-1 || j == y+1 || j==y-1)
                {
                    std::cout << "# ";
                }
                else 
                {
                    std::cout << "o ";
                }
            }

        }
        if (i > 0)
        {
            x++;
            y--;
        }
    }

    std::cout << " " << std::endl;

    int a = 14;
    int b = 15;

    for (int k = 0; k <= 29; k++)
    {
        for (int l = 0; l <= 29; l++)
        {
            if (l == a || l == b)
            {
                if (l == 29)
                {
                    std::cout << "x " << std::endl;
                }
                else
                {
                    std::cout << "x ";
                }
            }
            else
            {
                if (l == 29)
                {
                    std::cout << "- " << std::endl;
                }
                else
                {
                    std::cout << "- ";
                }
            }
        }
        if (k <= 13)
        {
            a--;
            b++;
        }
        else
        {
            a++;
            b--;
        }
        
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
