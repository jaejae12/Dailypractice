#include <iostream>
using namespace std;

int main()
{
    int n;
    int T = 0;
    cin >> n;
    for (int i = 1; i < n+1; i++) {
        T = i + T;
      
    }
    cout << T << endl;

    }