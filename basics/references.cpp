#include <iostream>

void increase(int& a);

int main(){

    int a = 5;
    std::cout << a << '\n';
    increase(a);
    std::cout << a;

    return 0;
}

void increase(int& a){
    a++;
}