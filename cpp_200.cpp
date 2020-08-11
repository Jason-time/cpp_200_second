#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char* argv[])
{
	time_t start = time(NULL);
	time_t finish= time(NULL);

	int pass_int = 1;

	time(&start);
	cout << start << endl;

	for (int i = 1; i < 100000;i++) {

		for (int j = 1;j < 100000;j++)
			pass_int += 1;	
	}

	time(&finish);
	cout << finish << endl;

	cout << "1을 100억 번 더하는 시간 : " << difftime(finish, start) << "초\n";

	return 0;
}

// 052 - 지나간 시간 알아내기 ( time )
