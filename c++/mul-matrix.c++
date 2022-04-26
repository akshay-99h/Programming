#include <iostream>

using namespace std;

void multi_matrix(int a[][3], int b[][3], int c[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void input_matrix(int a[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"array["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];
        }
    }
}

int main() {
    int a[3][3], b[3][3], c[3][3];
    cout << "Input matrix a: " << endl;
    input_matrix(a);
    cout << "Input matrix b: " << endl;
    input_matrix(b);
    multi_matrix(a, b, c);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

