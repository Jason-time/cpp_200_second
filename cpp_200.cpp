#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string str = "I'm a boy. You are a girl.";

	char find = 'a';

	int size = str.size();
	int count = 0;

	for (int i = 0;i < size;i++) {

		if (str[i] == find)
			count++;
	}

	cout << "문장의 a 개수는 " << count << "개 입니다." << endl;

	return 0;
}

// 035 - 순환문으로 특정 문자 개수 구하기(for)

