#include <iostream>

int main(){

    void* ptr = nullptr;
    std::cout << ptr << '\n';

    int var = 8;
    int* pVar = &var;
    *pVar = 10;
    std::cout << var;

    return 0;
}