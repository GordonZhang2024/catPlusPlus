#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[])
{
	ifstream fin(argv[1]);
	string s;
	int line = 1;
	while(getline(fin, s)) {
		printf("\x1b[36m%5d | \x1b[0m", line);
		cout << s << endl;
		++line;
	}
	return 0;
}
