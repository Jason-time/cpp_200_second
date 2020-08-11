#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "== 소수점 버리기==" << endl;
	cout << "floor(2.3) : " << floor(2.3) << endl;
	cout << "floor(-55.7) : " << floor(-55.7) << endl;

	cout << "== 소수점 올리기==" << endl;
	cout << "ceil(2.3) : " << ceil(2.3) << endl;
	cout << "ceil(-55.7) : " << ceil(-55.7) << endl;
	
	return 0;
}

// 043 - 실수 소수점 버리기 올리기 ( floor, ceil )
