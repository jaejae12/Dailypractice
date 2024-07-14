#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	int N =5 ;
	int S = 4;
	int Sum[5] = { 0, };
	int A;
	int max = 0;
	int score, rank;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < S; j++) {
			cin >> A;
			Sum[i] = Sum[i] + A;
		}

	}
	for (int i = 0; i < N; i++) {
		if (Sum[i] > Sum[max]) {
			max = i;
			
		}
		score = Sum[max];
		rank = max+ 1;
		
	}
	cout << rank << " " << score;

	return 0;
}