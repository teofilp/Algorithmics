#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main()
{
    multimap<string,string>numbers;
    numbers.insert(pair<string,string>("Jones","123"));
    numbers.insert(pair<string,string>("Smith", "245"));
    numbers.insert(pair<string,string>("Brown", "111"));

    return 0;
}
