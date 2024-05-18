#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
