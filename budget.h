#ifndef _BUDGET_H_
#define _BUDGET_H_

#include <iostream>
#include <cstdlib>
#include <cmath>

typedef struct Budget Budget;

struct Budget{
private:
    double a; //собственная часть
    double b; //заемная часть
public:
    Budget();
    Budget(double ch1, double ch2);
    void read(std::istream& is);
    void print(std::ostream& os);
    Budget add(const Budget& bud) const;
    Budget sub(const Budget& bud) const;
    Budget mult(const Budget& bud) const;
    Budget div(const Budget& bud) const;
    bool com(const Budget& bud, std::ostream& os) const;
    bool no(const Budget& bud, std::ostream& os) const;
};

#endif
