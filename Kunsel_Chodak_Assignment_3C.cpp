#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Loop that goes through 1-81, giving the number, square, and square root on each line
    for (int i = 1; i <= 81; i++) {
        cout << i << " " << pow(i, 2.0) << " " << sqrt(i) << endl;
    }
}
