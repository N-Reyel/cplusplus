#include <iostream>

int collatz(int n);

int main(){
    int n;
    std::cin >> n;
    std::cout << collatz(n) << std::endl;

    return 0;
}

int collatz(int n){
    if(n == 1){
        return 0;
    }else if((n%2) == 0){
        return (1 + (collatz(n/2)));
    }else{
        return (1 + (collatz((3*n)+1)));
    }
}