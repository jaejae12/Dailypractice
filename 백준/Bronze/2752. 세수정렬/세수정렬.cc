#include <iostream>



using namespace std;


int main()
{
	int S[3] = { 0, };
	int N= 3;
	int T;
	int temp;
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
	for (int i = 0; i < N; i++) {
		cout << S[i] << " ";
	}
	
	
	return 0;
}