#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int  N , a , b;
    int S = 0;
    cin >> N ;
    for (int i = 1; i < N+1; i++) {
        cin >> a >> b;
        S = a + b;
        cout << "Case #" << i << ": " << S << "\n";
        S = 0;
  
    }
    }