#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string name;
	int age;
	bool gender;
public:
	void Input();
	void Print();
	Student() { // 생성자
		cout << "\t\t-프로그램 시작-\n";
	}
	~Student() { // 소멸자 
		cout << "프로그램 종료.\n";
	}
};
void Student::Input() {
	cout << "input name : ";
	getline(cin, name);
	cout << "input age : ";
	cin >> age;
}
void Student::Print() {
	cout << "name : " << name << "\n" << "age : " << age << endl;
	cout << "welcome!\n";
}

int main() {
	Student st;
	st.Input();
	st.Print();
	return 0;
}
/*
class 클래스명 {
	// 멤버 변수(상태), 멤버 함수(행동)..
};
*/
// protected	기본적으로는 private이지만 상속관계에 놓여있을 때, 유도 클래스에서는 접근 허용
// this : 호출된 객체의 주소를 가리키는 상수 포인터
// 첫째: 멤버 변수와 이름이 같은 매개 변수를 가진 생성자(또는 멤버 함수)가 있는 경우: 
// this를 사용해서 구분할 수 있다.
// 둘째로 클래스 멤버 함수가 작업 중이던 객체(인스턴스)를 반환하는
// 방식이 유용할 때가 종종있다.이렇게 하면 같은 객체의 여러 멤버 함수를 연속해서 호출할 수 있는 방법이다.

/*
* class Calc
{
private:
    int m_Value = 0;

public:
    Calc& Add(int value) { m_Value += value; return *this; }
    Calc& Sub(int value) { m_Value -= value; return *this; }
    Calc& Mul(int value) { m_Value *= value; return *this; }

    int GetValue() { return m_Value; }
}
int main()
{
	Calc calc;

	calc.Add(5); // return void
	calc.Sub(3); // return void
	calc.Mul(4); // return void

	cout << calc.GetValue() << endl; // 8
	return 0;
}
*/