﻿#include <iostream>

using namespace std;

void Func1(bool *is_on) {

	cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func2(bool &is_on) {

	cout << "Call by reference : " << sizeof(is_on) << endl;;
}

int main(int argc, char* argv[])
{
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
}

// 076 - Call by Address 이해하기

