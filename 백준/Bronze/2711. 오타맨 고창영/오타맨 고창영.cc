#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	int N ;
	int A;
	string str;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> A >> str;
		str.erase(str.begin() + (A - 1));
		cout << str << endl;
		
	
	}

	return 0;
}