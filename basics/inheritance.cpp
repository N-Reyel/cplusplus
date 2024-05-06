#include <iostream>

class Vampire{
    public:
        void drinkBlood(){
            std::cout << "Drinks blood" << std::endl;
        }
        void noSun(){
            std::cout << "Dies in the Sun" << std::endl;
        }
        void immortal(){
            std::cout << "Is Immortal" << std::endl;
        }
}; 

class Dracula : public Vampire{
    public:
        void vampires(){
            std::cout << "Creates other vampires" << std::endl;
        }
};


int main(){
    Vampire lestat;
    lestat.drinkBlood();

    Dracula vlad;
    vlad.drinkBlood();
    vlad.vampires();


    return 0;
}