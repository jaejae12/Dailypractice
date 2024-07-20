#include <iostream>



using namespace std;


int main()
{
	int S[50] = { 0, };
	int N;
	int T=1;
	int temp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (S[i] < S[j]) {
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}
	if (N % 2 == 0) {
		T = S[N - 1] * S[0];
	}
	else if (N % 2 == 1) {
		T = S[N / 2] * S[N / 2];
	}
	
	cout << T;
	
	
	return 0;
}