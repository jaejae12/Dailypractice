#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string N;
	int T;
	int temp;
	int Sum = 0;
	int Tot = 0;
	cin >> N;
	sort(N.begin(), N.end(), greater<char>());
	
	cout << N << endl;
	return 0;
}