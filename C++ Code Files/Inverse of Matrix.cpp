#include <iostream>

using namespace std;

int main() {
    float A[2][2], inverse[2][2];
    float determinant;

    cout << "Enter elements of 2x2 matrix A:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> A[i][j];

    determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    if (determinant == 0) {
        cout << "Inverse does not exist. Determinant is 0." << endl;
        return 0;
    }

    inverse[0][0] =  A[1][1] / determinant;
    inverse[0][1] = -A[0][1] / determinant;
    inverse[1][0] = -A[1][0] / determinant;
    inverse[1][1] =  A[0][0] / determinant;

    cout << fixed << setprecision(2);
    cout << "Inverse of Matrix A:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << inverse[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

