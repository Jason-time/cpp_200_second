#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	auto result1 = min(1, 5);
	auto result2 = max('a', 'z');

	cout << result1 << ", " << result2 << endl;

	auto result3 = minmax({ 'a','n','z' });
	auto result4 = minmax({ 1,2,3 });

	cout << result3.first << ", " << result3.second << endl;
	cout << result4.first << ", " << result4.second << endl;


	return 0;
}

// 068 - 정수와 문자의 최대/최소값 알아내기 ( min, max )
