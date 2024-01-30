#include <vector>
#include <limits>

using namespace std;

int hourglassSum(vector<vector<int>> vec) {
    int maxSum = numeric_limits<int>::min(); // Initialize maxSum to the smallest possible integer

    for (size_t i = 0; i <= vec.size() - 3; i++) {
        for (size_t j = 0; j <= vec[i].size() - 3; j++) {
            int sum = vec[i][j] + vec[i][j + 1] + vec[i][j + 2] +
                      vec[i + 1][j + 1] +
                      vec[i + 2][j] + vec[i + 2][j + 1] + vec[i + 2][j + 2];

            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main(){
    return 0;
}