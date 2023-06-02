#include "inter.hpp"

int main( void ) {
    std::cout << "--------- Array of Integers ---------" << std::endl;
	int ArrayI[3] = {3 , 89, 54};
    iter(ArrayI, 3, print);

    std::cout << std::endl;
    std::cout << "--------- Array of Floats ---------" << std::endl;
    float ArrayF[3] = {1.32, 3.4, 5.9};
    iter(ArrayF, 3 , print);


    std::cout << std::endl;
    std::cout << "--------- Array of Characters ---------" << std::endl;
    char ArrayC[3] = {'A', 'B', 'C'};
    iter(ArrayC, 3 , print);

    std::cout << std::endl;
    std::cout << "--------- Array of Strings---------" << std::endl;
    std::string ArrayS[3] = {"Hello", "Beautiful", "World"};
    iter(ArrayS, 3 , print);
    return 0;
}
