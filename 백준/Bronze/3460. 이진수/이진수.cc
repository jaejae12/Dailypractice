#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        
        queue<int> positions;
        int position = 0;
        
        while (n != 0) {
            if (n % 2 == 1) {
                positions.push(position);
            }
            n /= 2;
            position++;
        }
        
        bool first = true;
        while (!positions.empty()) {
            if (!first) cout << " ";
            cout << positions.front();
            positions.pop();
            first = false;
        }
        cout << endl;
    }
    
    return 0;
}