﻿#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	stringstream ss;

	double number1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9";

	cout << "== string to double ==" << endl;
	while (!ss.eof()) {

		ss >> number1;
		ss.ignore();

		cout << number1 << ", ";
	}
	ss.clear();
	ss.str("");
	ss << "1," << "2" << 3 << " " << 4;

	int number2 = 0;

	cout << endl << "== string to int ==" << endl;
	while (!ss.eof()) {

		ss >> number2;
		ss.ignore();

		cout << number2 << ", ";

	}
	return 0;
}

// 064 - 문자열을 숫자로 변환하기 ( stringstream )
