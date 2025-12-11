#include <iostream>  
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    set<string> empolyee;
    for (int n_idx = 0; n_idx < n; n_idx++) {
        string name, work;
        cin >> name >> work;
        if (work == "enter")
            empolyee.insert(name);
        else
            empolyee.erase(name);
    }
    for (auto i = empolyee.rbegin(); i != empolyee.rend(); ++i)
        cout << *i << "\n";
    return 0;
}
