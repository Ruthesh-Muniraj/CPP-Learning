#include <iostream>

int main()
{
    /*
    
    Type	                Typical Bit Width	Typical Range
    char	                    1byte               -127 to 127 or 0 to 255
    unsigned char	            1byte               0 to 255
    signed char	                1byte               -127 to 127
    int	                        4bytes              -2147483648 to 2147483647
    unsigned int	            4bytes              0 to 4294967295
    signed int	                4bytes              -2147483648 to 2147483647
    short int	                2bytes              -32768 to 32767
    unsigned short int	        2bytes              0 to 65,535
    signed short int	        2bytes              -32768 to 32767
    long int	                8bytes              -2,147,483,648 to 2,147,483,647
    signed long int	            8bytes              same as long int
    unsigned long int	        8bytes              0 to 4,294,967,295
    long long int	            8bytes              -(2^63) to (2^63)-1
    unsigned long long int	    8bytes              0 to 18,446,744,073,709,551,615
    float	                    4bytes	
    double	                    8bytes	
    long double	                12bytes	
    wchar_t	                    2 or 4 bytes	    1 wide character

    */
    std::cout << "Size of char : " << sizeof(char) << std::endl;
    std::cout << "Size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of short int : " << sizeof(short int) << std::endl;
    std::cout << "Size of long int : " << sizeof(long int) << std::endl;
    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of wchar_t : " << sizeof(wchar_t) << std::endl;

    return 0;
}