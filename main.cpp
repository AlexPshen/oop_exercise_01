#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>

#include "budget.h"


int main(){
    Budget my_bud{};
    my_bud.read(std::cin);
    std::cout << "Object1" << '\n';
    my_bud.print(std::cout);
    Budget his_bud{};
    his_bud.read(std::cin);
    std::cout << "Object2" << '\n';
    his_bud.print(std::cout);
    bool tmp1 = my_bud.com(his_bud);
    if(tmp1){
        std::cout << "Object1 == Object2 - Yes" << '\n' << '\n';
    } else{
        std::cout << "Object1 == Object2 - No" << '\n' << '\n';
    }
    bool tmp2 = my_bud.no(his_bud);
    if(tmp2){
        std::cout << "Object1 != Object2 - Yes" << '\n' << '\n';
    } else{
        std::cout << "Object1 != Object2 - No" << '\n' << '\n';
    }
    std::cout << "Addition" << '\n';
    my_bud.add(his_bud).print(std::cout);
    std::cout << "Subtraction" << '\n';
    my_bud.sub(his_bud).print(std::cout);
    std::cout << "Division" << '\n';
    my_bud.div(his_bud).print(std::cout);
    std::cout << "Multiplication" << '\n';
    my_bud.mult(his_bud).print(std::cout);
    return 0;
}


