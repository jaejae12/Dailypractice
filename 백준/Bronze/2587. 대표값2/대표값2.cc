#include <iostream>



using namespace std;


int main()
{
	int N = 5;
	int S[5] = { 0, };
	int temp;
	int Sum = 0;
	int Tot = 0;
	for (int i = 0; i < N; i++) {
		cin >> S[i];
		Tot += S[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (S[i] > S[j]) {
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}	
	Tot = Tot / 5;
	Sum = S[N / 2];
	cout << Tot << endl << Sum;
	return 0;
}