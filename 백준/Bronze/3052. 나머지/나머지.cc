#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	int N =10 ;
	int A;
	int rem[42] = { 0, };
	int tmp = 0;
	int max = 0;
	int tot = 0;
	for (int i = 0; i < N; i++) {
		cin >> A;
		tmp = A % 42;
		rem[tmp]++;
		
	}
	for (int i = 0; i < 42; i++) {
		if (rem[i] >= 1) {
			tot++;
		}
	}


	cout << tot;


	return 0;
}