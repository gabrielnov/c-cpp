#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double v, r, h, pi = M_PI;

    std::cin >> r >> h;

    v = pi * (r * r) * h;

    std::cout << std::setprecision(16) << v;
}
