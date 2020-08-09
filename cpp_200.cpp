#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int kArraySize = 2;

	int founding[kArraySize];
	founding[0] = 918;
	founding[1] = 1392;

	cout << "고려 건국 연도 : " << founding[0] << endl;
	cout << "조선 건국 연도 : " << founding[1] << endl;

	return 0;
}

// 010 - 배열 배우기 ( [크기] )
