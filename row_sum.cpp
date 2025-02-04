// 

#include <iostream>
#include <vector>

void displayLowerTriangularMatrix(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                std::cout << matrix[i][j] << " ";
            } else {
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    displayLowerTriangularMatrix(matrix);
    return 0;
}
