#include <iostream>
using namespace std;

int main()
{
    int K;
    int T;
    int A;
    int S[501] = { 0, };
    int tot = 0;
    int temp;
    int P, M;
    cin >> K;
    for (int i = 0; i < K; i++) {
        cin >> P >> M; 
        for (int i = 0; i < P; i++) {
            cin >> A;
            S[A]++;
        }
        for (int i =0; i <M+1; i++) {
            if (S[i] > 1) {
                tot = tot + (S[i] - 1);
            }
        }
        cout << tot << endl;
        for (int i = 0; i < M+1; i++) {
            S[i] = 0;
        }
        tot = 0;
    }

    return 0;
}