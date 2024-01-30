#include <vector>


using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> TDArr(n);
    vector<int> answers;
    int lastAnswer = 0;

    for (const vector<int>& vec : queries) {
        int type = vec[0];
        int x = vec[1];
        int y = vec[2];

        if (type == 1) {
            int idx = (x ^ lastAnswer) % n;
            TDArr[idx].push_back(y);
        } else {
            int idx = (x ^ lastAnswer) % n;
            lastAnswer = TDArr[idx][y % TDArr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }
    return answers;
}


int main(){
    return 0;
}