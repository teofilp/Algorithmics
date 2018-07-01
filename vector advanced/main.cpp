#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> numbers;
   int sum=0;
    for(int i=0;i<10;i++){

        numbers.push_back(i+1);
    }
    for(int i=0;i<numbers.size();i++){
        sum+=numbers[i];

    }
    cout<<sum;
    return 0;
}
