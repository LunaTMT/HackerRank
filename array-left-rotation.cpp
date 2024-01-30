#include <vector>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rotatedArray(n);
    
    for (size_t i = 0; i < n; i++){
        rotatedArray[(i - d + n) % n] = arr[i];
    }
    return rotatedArray;
}


int main(){
    return 0;
}