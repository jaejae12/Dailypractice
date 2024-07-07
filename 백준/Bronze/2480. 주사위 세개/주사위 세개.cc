
#include <iostream>
using namespace std;

int main()
{

    int a, b, c, M;
    cin >> a >> b >> c;
    if ((a ==b) && (b ==c) && (a ==c)) {
        M = 10000 + a * 1000;
        cout << M;
    }
    else if ((a == b) && (a != c) && (b != c)) {
        M = 1000 + a*100;
        cout <<  M;
    }
    else if ((b == c) && (b != a) && (c != a)) {
        M = 1000 + b * 100;
        cout << M;
    }
    else if ((c == a) && (c != b) && (a != b)) {
        M = 1000 + c * 100;
        cout << M;
    }
    else if ((a != b) && (b != c) && (c != a)) {
        if ((a >= b) && (a >= c)) {
            M = a * 100;
            cout << M;
        }
        else if ((b >= c) && (b >= a)) {
            M = b * 100;
            cout << M;
        }
        else if ((c >= a) && (c >= b)) {
            M = c * 100;
            cout << M;
        }
    }


    }