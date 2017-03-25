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
        double new_ra(double sa);
        double new_rb(double sb);
private:
        double k;
        double ra;
        double rb;
};

