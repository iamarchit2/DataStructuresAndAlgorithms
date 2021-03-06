#include <iostream>
using namespace std;
int linearsearch(int array[], int be, int N, int toBesearched) {
    if (be > N) {
        return -1;
    }
    int aheadindex = linearsearch(array, be + 1, N, toBesearched);
    if (array[be] == toBesearched) return be;
    return aheadindex;
}
int main() {
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    int M;
    cin >> M;
    int index = linearsearch(array, 0, N, M);
    cout << index;
}
