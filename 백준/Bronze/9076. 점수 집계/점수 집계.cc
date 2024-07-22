#include <iostream>
using namespace std;

int main()
{
    int T;
    int N = 5;
    int S[5] = { 0, };
    int temp;
    int sum = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < N; j++) {
            cin >> S[j];
        }
        for (int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++){
                if (S[i] > S[j]) {
                    temp = S[j];
                    S[j] = S[i];
                    S[i] = temp;
                }
            }
        }
        if ((S[1] - S[3]) >= 4) {
            cout << "KIN\n";
        }
        else {
            sum = S[3] + S[1] + S[2];
            cout << sum << endl;
        }
    }



    return 0;
}