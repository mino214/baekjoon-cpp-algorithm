#include <iostream>
#include <string>
#include <vector> //vector 컨테이너는 자동으로 메모리가 할당되는 배열
using namespace std;
int main() {
    vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    int idx;
    string str;
    cin >> str;
    for (int i = 0; i < croatian.size(); i++)
    {
        while (1) {
            idx = str.find(croatian[i]);         // find 찾는다 찾으면 첫번째 인덱스를 반환
            if (idx == string::npos)             //tring::npos란 -1 값을 가지는 상수로 find() 
                 break;                          //함수 수행 시에 찾는 문자열이 없을 때 반환된다.
            str.replace(idx, croatian[i].length(), "#"); // 
        }
    }
    cout << str.length();
}