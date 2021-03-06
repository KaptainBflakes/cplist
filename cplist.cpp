#include <iostream>
#include <fstream>
#include <vector>
#include <string>
//copies all files listed in a list of files to a given path
using namespace std;
//argv[2] is output path. argv[3] is wether to force overwrite.
int main(int argc,char**argv){
	fstream f;f.open(argv[1]);
	vector<string> worklist;
	if(f.good()){//loads worklist file to memory
		char c;string out="";
		while(f.get(c)){
			if(c=='\n'){worklist.push_back(out);out="";}
			else{out+=c;}
		}
	}
	for(int i=0;i<worklist.size();i++){
		string cmd="copy /y ";
		cmd+=worklist[i];
		cmd+=" ";cmd+=argv[2];
		system(&cmd[0]);
	}
	return 0;
}