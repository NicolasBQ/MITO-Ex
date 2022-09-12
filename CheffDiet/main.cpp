#include <iostream>

int main()
{
    int T;

    std::cout << "Select the number of test you want to try: " << std::endl;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, K, grams_day, p_grams, unable_day;
        bool passed_test = true;
        p_grams = 0;

        std::cout << "TEST NUMBER " << i + 1 << std::endl;

        std::cout << "Select the number of diet days: " << std::endl;
        std::cin >> N;

        std::cout << "Select the grams of protein for each day: " << std::endl;
        std::cin >> K;

        int arr[N];

        for (int j = 0; j < N; j++)
        {
            std::cout << "Enter the grams of protein you want to buy for day number " << j + 1 << std::endl;
            std::cin >> grams_day;
            arr[j] = grams_day;
        };

        for (int j = 0; j < N; j++)
        {
            p_grams = p_grams + arr[j];
            p_grams = p_grams - K;

            if (p_grams < 0)
            {
                unable_day = j + 1;
                passed_test = false;
                break;
            }
        }

        if (!passed_test)
        {
            std::cout << "NO " << unable_day << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }
}