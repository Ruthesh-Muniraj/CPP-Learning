#include <iostream>

enum class GENDER       //<---
{
    male,
    female
};

int main()
{
    GENDER gender = GENDER::male;       //<---
    switch (gender)
    {
    case GENDER::male:
        std::cout << "The gender is Male" << std::endl;
        break;
    case GENDER::female:
        std::cout << "The gender is Memale" << std::endl;
        break;
    }
}