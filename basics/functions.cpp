#include <iostream>

void sayHi(std::string name, int age);

int main(){
    std::string name;
    int age;
    std::cout << "Please write your name: ";
    getline(std::cin, name);
    std::cout << "Please write your age: ";
    std::cin >> age;

    sayHi(name, age);

    return 0;
}

void sayHi(std::string name, int age){
    std::cout << "Hello " << name << " you are " << age << " years old!" <<std::endl;
}