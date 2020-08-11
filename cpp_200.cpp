﻿#include <iostream>
#include <ctime>

using namespace std;
#pragma warning(disable : 4996)

int main(int argc, char* argv[])
{
	time_t now = time(NULL);
	tm* ptm = localtime(&now);

	char buffer[64];
	strftime(buffer, 64, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n", ptm);

	cout << buffer;
	return 0;
}

// 051 - 날짜와 시간을 문자열로 변환하기 ( localtime )
