#include <iostream>

enum GENDER
{
    male,
    female
}; // <---- Check other way
int main()
{
    GENDER gender = male; // <----
    switch (gender)
    {
    case male:
        std::cout << "The gender is Male" << std::endl;
        break;
    case female:
        std::cout << "The gender is Memale" << std::endl;
        break;
    }
}

/*
//It works either way
enum GENDER
{
    male,
    female
} g;        // <----
int main()
{
    g = male;       // <----
    switch (g)
    {
    case male:
        std::cout << "The gender is Male" << std::endl;
        break;
    case female:
        std::cout << "The gender is Memale" << std::endl;
        break;
    }
}

*/