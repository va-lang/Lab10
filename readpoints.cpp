#include "StabbingLine.h"

void readPoints(ifstream& file,Point p1[],int& numPoints){
	if(!file.is_open()){
		cout<<"File failed to open"<<endl;
		
	}
		file>>numPoints;
	for (int i=0; i< numPoints; i++){
		cout<<p1[i].Pid<<endl;
	}
}

int main(){
	
	ifstream file("points.txt");

			
		int Pid,X,Y;
		
		string mystring,Xcord,yCord;
		string line;
		while(getline(file,line)){
		stringstream ss(line);
		getline(ss, mystring, ',');
		Pid = stoi(mystring);
		getline(ss, Xcord,',');
		X = stoi(Xcord);
		getline(ss,yCord,',');
		Y = stoi(yCord);
	
		cout<<"Pid: "<< Pid<<endl;
		cout<<"X: "<< X<<endl;
		cout<<"Y: "<< Y<<endl;
	
		}
		file.close();
		Point p1[7];
		int E = 7;
	readPoints(file,p1,E);
		

}



