#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mm,dd,yyyy;
    cin>>mm;
    cin.get();
    cin>>dd;
    cin.get();
    cin>>yyyy;

    char dot= '.';

    cout<<yyyy<<dot<<mm<<dot<<dd;

    return 0;
}