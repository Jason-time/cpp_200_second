﻿#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int number = 2;

	switch (number) {

		case 1:
			cout << "number 값은 1입니다." << endl;
			break;
		case 2:
			cout << "number 값은 2입니다." << endl;
			break;
		default:
			cout << "number 값을 알 수 없습니다." << endl;
			break;
	}

	return 0;
}

// 037 - 조건 선택문 이해하기 ( switch~case~default )
