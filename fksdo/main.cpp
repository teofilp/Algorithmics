#include <windows.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	const char* str= "GPUMonitor.widget";
	const char* action= "open";
	ShellExecute(NULL,action,str,NULL,NULL,SW_SHOW);
	 cin.get();
	return 0;

};
