#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, c, s;

    cin >> a >> b >> c;

    cout << pow(a, 2) +  pow(b, 2) +  pow(c, 2) << endl;

    s =  pow((a+b+c), 2);

    cout << s;
}