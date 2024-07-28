#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> mystack;
    int sum = 0;
    int K;
    int A;
    cin >> K;
    for (int i = 0; i < K; i++) {
        cin >> A;
        if (A != 0) {
            mystack.push(A);
        }
        else if (A == 0) mystack.pop();   
    }

    while (!mystack.empty()) {
        sum += mystack.top();
        mystack.pop();
    }
    cout << sum << endl;


    return 0;
}