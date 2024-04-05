#include <iostream>

class book{
    public:
        std::string title;
        std::string author;
        int pages;
};

int main(){

    book book1;
    book1.title = "The Catcher in the rye";
    book1.author = "J.D. Salinger";
    book1.pages = 234;

    book book2;
    book2.title = "On the Road";
    book2.author = "Jack Kerouac";
    book2.pages = 320;

    std::cout << book1.title << '\n';
    std::cout << book1.author << '\n';
    std::cout << book1.pages << '\n';

    std::cout << book2.title << '\n';
    std::cout << book2.author << '\n';
    std::cout << book2.pages << '\n';

    return 0;
}