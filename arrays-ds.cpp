#include <vector>
#include <algorithm>

using namespace std;

vector<int> reverseArray(vector<int> a) {
    std::reverse(a.begin(), a.end());
    return a;
}

int main(){
    return 0;
}