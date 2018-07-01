 set/ unordered_set/ multi_set // set = multime
map/ unordered_map/ multi_map

tin elementele sortate

#include <set>
set <int> s;// set <string> s; set <pair <int, int>> s;
s.insert(x);// o(logN), N = nr elemente
// contine doar 1 element x
s.size();
s.erase(x);// O(logN)
s.find(x) != s.end(); ==> x exista
*s.begin(); // = primul element
s.clear();

for (auto i:s)// s = set, i = elementul

multiset <int> ms;
ms.erase (ms.find(x));// sterge primul x gasit


#include <map>
#define LL long long
map <int, int> mp;// map <LL, int> mp;
++mp[x];// O(logN)
mp[x] = 23;
mp.find(x) != mp.end(); ==> x exista
for (auto i:mp)
//i.first - prima val din pereche
//i.second - a doua val din pereche
mp[x] = 0;
mp.size;
mp.clear();
