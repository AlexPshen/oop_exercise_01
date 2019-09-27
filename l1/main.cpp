#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
//using namespace std;

#include "budget.h"


int main(int argc, char *argv[]){
    if (argc != 2) {
	std::cout << "Error";
	return 111;
    }
    std::ifstream fr;
    fr.open(argv[1]);
    if (!fr){
        std::cout << "Error";
	return 100;
    }
    Budget my_bud{};
    my_bud.read(fr);
    std::cout << "Object1" << '\n';
    my_bud.print(std::cout);
    Budget his_bud{};
    his_bud.read(fr);
    std::cout << "Object2" << '\n';
    his_bud.print(std::cout);
    bool tmp1 = my_bud.com(his_bud, std::cout);
    if(tmp1){
        std::cout << "Object1 == Object2 - Yes" << '\n' << '\n';
    } else{
        std::cout << "Object1 == Object2 - No" << '\n' << '\n';
    }
    bool tmp2 = my_bud.no(his_bud, std::cout);
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
    fr.close();
    return 0;
}


