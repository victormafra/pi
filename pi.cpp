#include <iostream>
#include "pi.h"
using namespace std;


int main(){
	unsigned int i = 0, wrong = 0;
	string pi = "14159265", fullInput = "";
	char input;
	
	copyPiFromFile(&pi,"pi.txt");
	
	/* Input */ 
	cout << "Start typing, when you're tired press enter." << endl << "3.";
	
	while(scanf("%c", &input)){
		if(input=='\n'){
			break;
		}
		if(input!=pi[i++])
			wrong++;
		fullInput+=input;
	}
	
	/* Comparison Screen */
	cout << endl << "Correct answer: " << endl;
	piWithEightSpaces(pi,i);
	cout << "Your answer: " << endl;
	piWithEightSpaces(fullInput,i);
	
	/* Stats Screen */
	cout << endl;
	cout << "You typed " << i << " decimal places." << endl;
	cout << wrong << " of them are wrong." << endl;
	cout << i-wrong << " of them are right." << endl;
	cout << endl << "And I love you <3" << endl;
	
	return 0;
}
