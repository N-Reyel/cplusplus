#include <iostream>

class Vampire{
    public:
        void drinkBlood(){
            std::cout << "Drinks blood ";
        }
        void noSun(){
            std::cout << "Dies in the Sunlight ";
        }
        void immortal(){
            std::cout << "Is Immortal ";
        }
}; 

class Dracula : public Vampire{
    public:
        void vampires(){
            std::cout << "Creates other vampires ";
        }
        void noSun(){
            std::cout << "Does not die in the Sunlight ";
        }
};


int main(){
    Vampire lestat;
    std::cout << "Lestat "; 
    lestat.immortal();
    lestat.drinkBlood();
    lestat.noSun();
    std::cout << "\n";



    Dracula vlad;
    std::cout << "Vlad ";
    vlad.immortal();
    vlad.drinkBlood();
    vlad.noSun();
    vlad.vampires();


    return 0;
}