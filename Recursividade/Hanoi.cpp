#include <iostream>

int hanoi(int n);

int main(){
    int n;
    std::cin >> n;
    std::cout << hanoi(n);
    
    return 0;
}

int hanoi(int n){
    switch (n){
        case 1: {
            return 1;
            break;
        }
        default:{
            return (2*hanoi(n-1) + 1);
            break;
        }
    }
}