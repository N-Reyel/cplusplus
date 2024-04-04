#include <iostream>

int main(){
    int age = 19;
    int *pAge = &age;

    std::cout << *pAge << '\n';
    std::cout << *&age;



    return 0;
}