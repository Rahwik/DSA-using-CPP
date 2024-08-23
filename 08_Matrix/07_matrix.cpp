//rotate matrix anti-clockwise by 90 degree
#include<iostream>
#include<vector>
using namespace std;

void rotateMatrixAntiClockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    rotateMatrixAntiClockwise(matrix);

    cout << "Rotated Matrix (Anti-Clockwise by 90 degrees):" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}