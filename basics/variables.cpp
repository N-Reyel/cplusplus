#include <iostream>

int main(){
    std::string characterName = "Tom";
    int characterAge = 50;
    
    std::cout << "There once was a man named " << characterName << std::endl;
    std::cout << "He was " << characterAge << " years old" << std::endl;

    characterName = "Mike";

    std::cout << "He liked the name " << characterName << std::endl;
    std::cout << "But did not like being " << characterAge << std::endl;

    return 0;
}