#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <set>
#include <ctime>

using namespace std;

int main()
{
        clock_t set_time;
        clock_t alg_time;

        set<int> seti;
        vector<int> v;


        for(int i=0;i<10000000;i++)
            v.push_back(rand()%100000000);

        int t=v.size();
            set_time =  clock();

            for(int i=0;i<t;i++)
                seti.insert(v[i]);
            set_time = clock() - set_time;

        alg_time = clock();

        sort(v.begin(),v.end());

        alg_time = clock() - alg_time;


         cout<<"set time was: "<<set_time<<endl;
         cout<<"algorithm time was: "<<alg_time<<endl;








    return 0;
}
