﻿#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 문자열";

	int num1 = stoi(str1);
	int num2 = stoi(str2);
	int num3 = stoi(str3);

	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}

// 063 - 문자열을 정수로 변환하기 ( stoi )
