#include <iostream>

bool recursive_stick(int N, int X);

int main()
{
    int T;

    std::cout << "Ingrese el numero de test cases" << std::endl;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, X;
        bool answer;

        std::cout << "Ingrese el tamano del palo" << std::endl;
        std::cin >> N;

        std::cout << "Ingrese el tamano de palo resultante para establecer si es posible" << std::endl;
        std::cin >> X;

        if (X >= 1 && X < N)
        {
            answer = recursive_stick(N, X);
        }
        else
        {
            std::cout << "Este valor no puede ser ingresado" << std::endl;
        }

        if (answer)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}

bool recursive_stick(int N, int X)
{
    if (N == 1)
    {
        if (N == X)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (N / 2 == X)
        {
            return true;
        }
        else
        {
            recursive_stick(N / 2, X);
        }
    }
}