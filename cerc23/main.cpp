#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    vector<int> v(10);
    for(int i=0; i<10; i++)
        v[i] = rand()%1000;

            random_shuffle(v.begin(), v.end());
    for(int i=0; i<10; i++)
        cout<<v[i]<<" ";

    return 0;
}
