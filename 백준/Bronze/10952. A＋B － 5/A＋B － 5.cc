#include <iostream>
using namespace std;
int main()
{
	static int A, B;
	while (1) {
		cin >> A >> B;
		if ((A != 0) && (B != 0)) {

			cout << A + B << endl;

		}
		else if ((A == 0) && (B == 0)) {
			break;
		}
	}
}