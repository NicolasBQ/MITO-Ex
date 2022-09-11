#include <iostream>

int main()
{
    int T, N, n;
    bool passed_test = false;
    int odd_doll = -99999;

    std::cout << "Enter the number of tests: " << std::endl;
    std::cin >> T;

    std::cout << "Enter the number of Dolls: " << std::endl;
    std::cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        std::cout << "Enter the doll number " << i + 1 << std::endl;
        std::cin >> n;
        arr[i] = n;
    };

    for (int t = 0; t < T; t++)
    {
        for (int i = 0; i < N; i++)
        {
            int current_index = arr[i];
            if (current_index == odd_doll)
                continue;
            for (int j = 0; j < N; j++)
            {
                if (i == j)
                {
                    continue;
                }
                else
                {
                    if (current_index == arr[j])
                    {
                        passed_test = true;
                        break;
                    }
                    else
                    {
                        passed_test = false;
                    }
                }
            }

            if (!passed_test)
            {
                odd_doll = current_index;
                break;
            }
        }
        std::cout << odd_doll << std::endl;
    }

    return 0;
}