#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N = 9;
    int S[9] = { 0, };
    int sum = 0;
    int ex1, ex2;
    int temp;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        sum += S[i];
    }
    sum = sum - 100;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (sum == (S[i] + S[j])) {
                ex1 = i;
                ex2 = j;
            }
        }
    }
 
    for (int i = 0; i <N; i++) {
        if ((i != ex1) && (i != ex2)) {
            cout << S[i] << endl;
        }
    }

    return 0;
}