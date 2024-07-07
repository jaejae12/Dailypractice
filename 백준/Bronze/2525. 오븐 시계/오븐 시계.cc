
#include <iostream>
using namespace std;

int main()
{

    int H, M, T;
    cin >> H >> M >> T;
    if ((M + T >= 60) && ((H + (T+M)/60) >= 24)) {
        H = (H + (T+M) / 60) - 24;
        M = (M + T) % 60;
        cout << H << " " <<  M;
    }
    else if ((M + T) < 60) {
        M = M + T;
        cout << H << " " <<  M;
    }
    else if ((M + T >= 60) && ((H + (T+M) / 60) <= 24)) {
        H = H + (T+M) / 60;
        M = (M + T) % 60;
        cout << H << " " << M;
    }


    }