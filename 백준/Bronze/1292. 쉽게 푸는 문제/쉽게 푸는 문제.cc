#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main()
{
	int A, B;
	cin >> A >> B;
	int tot = 0;
	int n = 0;
	for (int i = 1; i <=B ; i++) {
		for (int j = 1; j <= i; j++) {
			n++;
			if ((n >= A) && (n <= B)) {
				tot = tot + i;
			}
			
		}
	}

	cout << tot;
	return 0;
}