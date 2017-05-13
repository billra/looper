// looper.cpp

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3) {
		cout << "usage: {range begin} {range end} (inclusive)" << endl;
		return 1;
	}

	const unsigned int lo(stoul(argv[1]));
	const unsigned int hi(stoul(argv[2]));
	if (hi < lo) {
		cout << "range end must be greater or equal to range begin" << endl;
		return 1;
	}
	const unsigned int range(hi - lo + 1);

	cout << "range [" << lo << "-" << hi << "]" << endl;

	for (unsigned int x;; ++x) {
		if (!_kbhit()) { continue; }
		if ('q' == _getch()) { return 0; }
		cout << x%range + lo << " " << flush;
	}

	return 0;
}
