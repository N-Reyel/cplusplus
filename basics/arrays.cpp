#include <iostream>

int main(){
    int luckyNumbers[20] = {4, 8, 15, 16, 23, 42};
    
    std::cout << luckyNumbers[0] << std::endl;
    std::cout << luckyNumbers[2] << std::endl;

    luckyNumbers[0] = 19;
    std::cout << luckyNumbers[0] << std::endl;

    luckyNumbers[10] = 100;
    std::cout << luckyNumbers[10] << std::endl;

    return 0;
}