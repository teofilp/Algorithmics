

#include <iostream>

using namespace std;
int binar(int v[], int left, int right, int x){

    if(left>right)
        return -1;
    int m=(left+right)/2;
    if(x==v[m])
        return m;
    if(x<v[m])
        return binar(v,left,m=1,x);
    else
        return binar(v,m+1,right,x);







}/*
int main()
{
    int v[100];
    for(int i=0;i<100;i++)
        v[i]=i;
    cout<<binar(v,0,99,100);
    return 0;
}

#include<iostream>
using namespace std;
int n,x,v[100],m;
int caut (int s, int d)
{
    if(s>d)
        return -1;
    else
        {
            m =(s+d)/2;
            if (x==v[m])
                return m;
            if (x<v[m])
                return caut(s,m-1);
            else
                return caut(m+1,d);
        }
}*/
int main()
{   int n,x,v[100];
    cout<<"n,x ";
    cin>>n>>x;
    cout<<"dati "<<n<<" elemente (in ordine crescatoare).\n";
    for (int i=1;i<=n;i++)  //Vectorul incepe de pe pozitia 0 pana la n-1
        v[i]=i;
    cout<<"elementul "<<x<<" a fost gasit pe pozitia: "<<binar (v,0,n-1,x);
    return 0;
}
