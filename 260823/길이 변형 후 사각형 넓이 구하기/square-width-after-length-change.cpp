#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int wid,leng;
    cin>>wid>>leng;

    wid=wid+8;
    leng= 3* leng;

    cout<<wid<<"\n";
    cout<<leng<<"\n";
    cout<<wid*leng;
    return 0;
}