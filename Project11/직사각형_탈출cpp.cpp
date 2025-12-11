#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y, w, h;
    int temp_1, temp_2;
    cin >> x >> y >> w >> h;
    temp_1 = min(x, y);
    temp_2 = min(w - x, h - y);
    cout << min(temp_1, temp_2);
}