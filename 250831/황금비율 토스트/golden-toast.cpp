#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;

    list<char> l;
    for (char ch : s) {
        l.push_back(ch);
    }

    auto it = l.end(); // 커서는 문자열 끝

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (it != l.begin()) it--;
        }
        else if (command == 'R') {
            if (it != l.end()) it++;
        }
        else if (command == 'D') {
            if (it != l.end()) it = l.erase(it);
        }
        else if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it, c);
        }
    }

    for (char ch : l) {
        cout << ch;
    }
    return 0;
}

