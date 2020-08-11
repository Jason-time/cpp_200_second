#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "==절대값 구하기==" << endl;
	cout << "-10의 절대값  " << abs(-10) << endl;
	cout << "-5.72의 절대값 " << fabs(-5.72) << endl;
	cout << endl;

	cout << "==제곱수 구하기==" << endl;
	cout << "2의 2승 : " << pow(2, 2) << endl;
	cout << "3의 4승 : " << pow(3, 4) << endl;
	
	return 0;
}

// 045 - 절대값과 제곱수 구하기 ( abs, fabs, pow )
