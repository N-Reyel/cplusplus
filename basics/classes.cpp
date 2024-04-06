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

        book(std::string titleC = "Unknown",std::string authorC = "Unknown",int pagesC = 0){
            title = titleC;
            author = authorC;
            pages = pagesC;
        }
};

int main(){

    book book0;
    book book1("The Catcher in the rye","J.D. Salinger",234);
    book book2("On the Road","Jack Kerouac",320);

    book0.info();
    std::cout << '\n';
    book1.info();
    std::cout << '\n';
    book2.info();

    return 0;
}