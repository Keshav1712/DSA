#include <iostream>
using namespace std;

int main() {
    int a[4][3];

    // input
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // output
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

