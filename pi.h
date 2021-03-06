#ifndef PI
#define PI

#include <fstream>
using namespace std;
void copyPiFromFile(string *pi, string fileName){
	string line;
	ifstream myfile (fileName);
	if (myfile.is_open()){
		while ( getline (myfile,line) ){
			*pi = line;
		}
		myfile.close();
	} else {
		cout << "Unable to open file"; 
	}
}

void piWithEightSpaces(string s, int size){
	cout << "3.";
	for(int j=0; j<size; j++){
		if(j%8==0 && j!=0){
			cout << " ";
		}
		cout << s[j];
	}
	cout << endl;
}

#endif 
