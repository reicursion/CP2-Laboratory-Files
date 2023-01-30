#include<iostream>
#include<string>
using namespace std;

int main(){
    // initialize variables
	string word;
	int i;

    // ask user input for a set of strings
	cout << "Enter a string: ";
	getline(cin, word);

	string lastWord;
    // for loop to go to each string and print the last word
	for (i = word.length() - 1; i >= 0; i--) {
        // if else statement that if the string is a space, print the last word
		if (word[i] == ' ') {
			cout << lastWord << endl;
			lastWord = "";
		} else {
			lastWord = word[i] + lastWord;
		}
	}

	cout << lastWord;
    return 0;
}