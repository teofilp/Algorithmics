#include <iostream>
#include <fstream>
#include <string>
#define uint64 unsigned long int;
using namespace std;
string c;
unsigned long int k, s, q, contor, x;
string Caps(string s);
string nextStr(string s);
int main(){
	ifstream read("caps.in");
	ofstream write("caps.out");
	read>>k>>s>>c;
	for(int i=0; i<s; i++){
		read>>x;
		cout<<x<<" "<<c.size();
		while(x > c.size())
		c = nextStr(c);
		contor = 0;
		for(int j=0; j<x; j++){
			if(c[j] == c[x-1])
				contor++;
		}
		write<<c[x-1]<<" "<<contor;
	}
	cout<<c;
	


	return 0;
}
string Caps(string s){
	for(int i=0; i<s.size(); i++)
		if(islower(s[i])){
			s[i] = toupper(s[i]);
		}
		else
			s[i] = tolower(s[i]);

	return s;
}
string nextStr(string s){
	string copyS = s;
	s = Caps(s);
	string final = copyS + s + s + copyS;
	return final;

}