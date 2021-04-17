#include "StabbingLine.h"

void readLines(ifstream& file, Line L1[], int& numLines){
	if(!file.is_open()){
		cout<<"File failed to open"<<endl;
	}
	
	file>>numLines;
	for (int i=0; i< numLines; i++){
		cout<<L1[i].Lid<<endl;
}	
}
		
		int main(){
	
	ifstream file("Lines.txt");

			
		int Lid,P1,P2;
		
		string mystring,Xcord,yCord;
		string line;
		while(getline(file,line)){
		stringstream ss(line);
		getline(ss, mystring, ',');
		Lid = stoi(mystring);
		getline(ss, Xcord,',');
		P1 = stoi(Xcord);
		getline(ss,yCord,',');
		P2 = stoi(yCord);
	
		cout<<"Lid: "<< Lid<<endl;
		cout<<"P1: "<< P1<<endl;
		cout<<"P2: "<< P2<<endl;
	
		}
		file.close();
		Line L1[7];
		int r = 7;
		readLines(file,L1,r);
}
