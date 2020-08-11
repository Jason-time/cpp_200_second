#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	string silla = "divided into the Three  Kingdoms.";

	transform(silla.begin(), silla.end(), silla.begin(), toupper);

	char lower_ch = 'g';
	char upper_ch = 'B';

	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);

	cout << "문자열 대문자로 : " << silla << endl;
	cout << "문자를 대문자로 : " << lower_ch << endl;
	cout << "문자를 소문자로 : " << upper_ch << endl;
	return 0;
}

// 056 - 문자열 대소문자 변환하기 ( toupper, tolower ) 
