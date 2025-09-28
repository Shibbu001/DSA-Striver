#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int num = 1;
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            // Left to right
            for (int j = 0; j < cols; j++) {
                cout << num++ << " ";
            }
        } else {
            // Right to left
            int temp = num + cols - 1;
            for (int j = 0; j < cols; j++) {
                cout << temp-- << " ";
                num++;
            }
        }
        cout << endl;
    }
    return 0;
}