#include <iostream>
using namespace std;

int main()
{
    int X , N , a , b;
    int T = 0;
    int S = 0;
    cin >> X >> N ;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        T = a * b;
        S = S + T;
    }
    if (S == X) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    }