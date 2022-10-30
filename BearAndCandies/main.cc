#include <iostream>

int main() {
    int test_cases;

    std::cout << "Ingrese el numero de test cases " << std::endl;
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; i++) {
        int A, B, j, limak_count, bob_count;
        bool end_game = false;
        j = 1;

        std::cout << "Ingrese el limite de dulces que puede comer Limak" << std::endl;
        std::cin >> A;

        std::cout << "Ingrese el limite de dulces que puede comer Bob" << std::endl;
        std::cin >> B;

        limak_count = bob_count = 0;

        while(!end_game) {
            if(j % 2 != 0) {
                limak_count += j;
            } else {
                bob_count += j;
            }

            if(limak_count > A) {
                std::cout << "Bob" << std::endl;
                end_game = true;
            }

            if(bob_count > B) {
                std::cout << "Limak" << std::endl;
                end_game = true;
            }
            j++;
        }
        
    }
}