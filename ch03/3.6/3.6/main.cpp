#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string s;
	cin >> s;

	for (auto &n : s) //char &n : s Ҳ�ǶԵ�
		n = 'X';
	
	cout << s << endl;

	return 0;
}