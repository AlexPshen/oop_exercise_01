#include <iostream>
#include <cstdlib>
#include <cmath>

#include "budget.h"


Budget::Budget(){
    a = 0;
    b = 0;
}

Budget::Budget(double ch1, double ch2){
    a = round(ch1 * 100) / 100;
    b = round(ch2 * 100) / 100;
}

void Budget::read(std::istream& is){
    double ch1, ch2;
    is >> ch1;
    is >> ch2;
    a = round(ch1 * 100) / 100;
    b = round(ch2 * 100) / 100;
}

void Budget::print(std::ostream& os){
    os << "Main part of the budget: " << a << '\n' << "Borrowed part of the budget: " << b << '\n' << '\n';
}

Budget Budget::add(const Budget& bud) const{
    Budget res{};
    res.a = a + bud.a;
    res.b = b + bud.b;
    return res;
}

Budget Budget::sub(const Budget& bud) const{
    Budget res{};
    if(a > bud.a){
        res.a = a - bud.a;
    } else {
        res.a = bud.a - a;
    }
    if(b > bud.b){
        res.b = b - bud.b;
    } else {
        res.b = bud.b - b;
    }
    return res;
}

Budget Budget::mult(const Budget& bud) const{
    Budget res{};
    res.a = round(a * bud.a * 100) / 100;
    res.b = round(b * bud.b * 100) / 100;
    return res;
}

Budget Budget::div(const Budget& bud) const{
    Budget res{};
    res.a = round(a / bud.a * 100) / 100;
    res.b = round(b / bud.b * 100) / 100;
    return res;
}

bool Budget::com(const Budget& bud, std::ostream& os) const{
    return bud.a == a && bud.b == b;
}

bool Budget::no(const Budget& bud, std::ostream& os) const{
    return (bud.a != a || bud.b != b);
}
