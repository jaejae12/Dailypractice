#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main()
{
	int A, B;
	cin >> A >> B;
	int i = 1;
	int j = 1;
	int DP[1001];
	DP[0] = 0;
	DP[1] = 1;
	while (i <= 1000) {
		for (int k = 0; k < j; k++) {
			DP[i] = DP[i-1] + j;
			i++;
			if (i > 1000) break;
		}
			j++;
		
	}
	cout << DP[B] - DP[A - 1];
	

	return 0;
}