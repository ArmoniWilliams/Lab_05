#include <iostream>
#include <vector>
#include <string>

using namespace std;

string abcTranslation(const string& input, const vector<char>& chipherTable) {
	string result = "";

	for (char ch : input) {
		if (ch >= 'A' && ch <= 'Z') {
			result += chipherTable[ch - 'A'];
		}
		else if (ch >= 'a' && ch <= 'z') {
			char upperCaseLetter = ch - 32;
			char upperCaseCode = chipherTable[upperCaseLetter - 'A'];
			result += upperCaseCode + 32;
		}
		else {
			result += ch;
		}
	}

	return result;
}

int main() {
	vector<char> cipherTable = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

	string input; 
	cout << "Input text to cypher: ";
	getline(cin, input);

	string translated = abcTranslation(input, cipherTable);

	cout << "Encoded Message: " << "\"" << translated << "\"" << endl;
}