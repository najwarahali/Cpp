#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    BitcoinExchange my_btc;
    if(ac == 2){
        construction_map(my_btc);
        output(av,my_btc);
    }
    else
        std::cout << "Error: invalid arg" << std::endl;
    return 0;
}
