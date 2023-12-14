#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	string line;
	

	ofstream fout("file1.txt");
	
	while(true){
		getline(cin, line);
		if(line == "-1"){
			break;
		}
		fout << line << endl;
	}
	fout.close();
	
	ifstream fin("file1.txt");
	
	while(getline(fin, line)){
		cout << line << endl; 
	}
	fin.close();

	return 0;
}

