#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int weight = 13;
    double gravity =0.165000;

    cout << fixed;
    cout.precision(6);
    
    cout <<weight <<" * "<<gravity<<" = " <<weight*gravity;
    return 0;
}