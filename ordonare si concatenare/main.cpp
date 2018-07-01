#include <iostream>
#include <vector>
using namespace std;
int *v1, *v2;
int i,j;
int n1; int n2;
int main()
{

    vector<int> concat;
    cin>>n1;
    int *v1 = new int[n1];
    for(i=0 ;i<n1; i++)
        cin>>v1[i];

    cin>>n2;
    int *v2 = new int[n2];
     for(j=0 ;j<n2; j++)
        cin>>v2[j];

    i=j=0;
    while(i<n1&&j<n2){
        if(v1[i]<=v2[j]){
              concat.push_back(v1[i]);
              i++;
        }


        else{
             concat.push_back(v2[j]);
             j++;
        }

    }
    if(i<n1)
        for( ; i<n1; i++)
        concat.push_back(v1[i]);
    if(j<n2)
        for(; j<n2; j++)
        concat.push_back(v2[j]);
    for(vector<int>::iterator it= concat.begin(); it!= concat.end(); it++)
        cout<< *it<<" ";


    return 0;
}
