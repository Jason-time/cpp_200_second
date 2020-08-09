#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string my_country = "korea";
	string my_job = "developer";

	cout << "Country : " << my_country << endl;
	cout << "Job : " << my_job << endl;

	string my_info = my_country + ", " + my_job;

	cout << "My Info : " << my_info << endl;

	return 0;
}

// 017 - 문자열형 변수 이해하기 ( string )
