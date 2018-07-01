#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream read("munte1.in");
	ofstream write("munte1.out");
	ifstream file;
	file.open("munte1.in");

	int n;
	string s;
	file>>n;
	const int line = n;
	
	for(int i=0; i<=line; i++)
		getline(file, s);
	int x;
	file>>x;
	
	read>>n;
		for(int i=0; i<n ;i++)
			for(int j=0; j<n; j++)
			{
				int nr;
				read>>nr;
				if(nr == x)
					write<<i+1<<" "<<j+1;
			}


	return 0;
}