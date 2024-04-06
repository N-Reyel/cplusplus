#include <iostream>

class book{
    public:
        std::string title;
        std::string author;
        int pages;

        void info(){
            std::cout << "Title: " << title << '\n';
            std::cout << "Author: " << author << '\n';
            std::cout << "Number of pages: " << pages << '\n';

        }
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

    book1.info();
    std::cout << '\n';
    book2.info();

    return 0;
}