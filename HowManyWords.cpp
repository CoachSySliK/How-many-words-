#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	do {
		cout << "Input string:\n";
		string input = "\0";
		getline (cin, input);
		input += ' ';
		int counter = 0;
		for (int i = 1; i < input.length(); i++) {
			if (input[i] == 32 && input[i - 1] != 32) 
				++counter;
		}
		
		cout << "answer: " << counter << endl;
		
	} while (true);
	
	return 0;
}