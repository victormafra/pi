#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	unsigned int i = 0, wrong = 0;
	string pi = "14159265", line;
	string input_history = "";
	char input;
	
	ifstream myfile ("pi.txt");
	if (myfile.is_open()){
		while ( getline (myfile,line) ){
			pi = line;
		}
		myfile.close();
	} else {
		cout << "Unable to open file"; 
	}
	
	cout << "Start typing, when you're tired press enter." << endl << "3.";
	
	while(scanf("%c", &input)){
		if(input=='\n'){
			break;
		}
		if(input!=pi[i++])
			wrong++;
		input_history+=input;
	}
	
	cout << endl << "Correct answer: " << endl;
	cout << "3.";
	for(int j=0; j<i; j++){
		if(j%8==0 && j!=0){
			cout << " ";
		}
		cout << pi[j];
	}
	cout << endl << endl;
	
	
	cout << "Your answer: " << endl;
	cout << "3.";
	for(int j=0; j<i; j++){
		if(j%8==0 && j!=0){
			cout << " ";
		}
		cout << input_history[j];
	}
	cout << endl << endl << endl;
	
	cout << "You typed " << i << " decimal places." << endl << wrong << " of them are wrong." << endl << i-wrong << " of them are right." << endl;
	cout << endl << "And I love you <3" << endl;
	
	return 0;
}
