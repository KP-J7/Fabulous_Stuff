#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int y=19;
    double x=1.95,z=-3.26;
    double t;
    double u;
    t = t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3); u = exp(x * z) + (sqrt(y / x));
    if (t>u){
        std::cout<<"True";
    }else if (u>t){
        std::cout<<"False";
    }
}
