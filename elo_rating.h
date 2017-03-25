#include <iostream>
#include <math.h>
#include <fstream>
#include <cstdlib>
using namespace std;
class Data
{
public:
        Data();
        double ea();
        double eb();
        double new_ra(double sa,double ea);
        double new_rb(double sb,double eb);
private:
        double k;
        double ra;
        double rb;
};

