#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int a = str[0] - '0';
        int b = str[2] - '0';

        if (a < b) {
            if (str[1] == '<') {
                cout << str << endl;
            } else {
                cout << a << "<" << b << endl;
            }
        } else if (a > b) {
            if (str[1] == '>') {
                cout << str << endl;
            } else {
                cout << a << ">" << b << endl;
            }
        } else {
            if (str[1] == '=') {
                cout << str << endl;
            } else {
                cout << a << "=" << b << endl;
            }
        }
    }

    return 0;
}
