#include <iostream>
#include <queue>


using namespace std;


int main()
{
	int N;
	int T;
	int Max=0 ;
	int Min =0;
	int tmp = 0;
	cin >> N;
	

	for (int i = 0; i < N; i++) {
		cin >> T;
		tmp = T;
		if (i == 0){
			Max = T;
			Min = T;
		}
		if (tmp > Max) {
			Max = tmp;
		}
		if (tmp < Min) {
			Min = tmp;
		}
	}
	cout << Min << " " << Max;
	return 0;
}