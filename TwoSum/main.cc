#include <iostream>


int main() {
    int elements, target;

    std::cout << "Enter the number of elements you wold like to add: " << std::endl;
    std::cin >> elements;

    std::cout << "Enter the target value: " << std::endl;
    std::cin >> target;

    int nums[elements];
    int output[2];

    for(int i = 0; i < elements; i++) {
        std::cout << "Enter the element " << i + 1 << std::endl;
        std::cin >> nums[i];
    }


    for(int i = 0; i < elements; i++) {
        for(int j = 0; j < elements; j++) {
            if(i == j) {
                continue;
            }
            
            if(nums[i] + nums[j] == target) {
                output[0] = j;
                output[1] = i;
            }
        }
    }

    for(int i = 0; i < 2; i++) {
        std::cout << output[i] << std::endl;
    }

     return 0;
}