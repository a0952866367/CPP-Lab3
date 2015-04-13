#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ifstream openfile;
	openfile.open("file.in",ios::in);
	if( !openfile ){
		cerr << "File could not be opened " << endl;
		exit(1);
	}
	int i;//input number
	int number = 0;//count how many numbers
	vector<int> w;
	while( openfile >> i ){
		w.push_back(i);
		number++;
	}
	sort( w.begin(),w.end() );
	int total = 0;
	for( int j=number-5 ; j<number ; j++ ){
		total += w.at(j);
	}
	cout << total << endl;
}
