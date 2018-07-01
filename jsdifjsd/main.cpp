#include <iostream>
#include <math.h>
using namespace std;

//1 5 1431 6364696
bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);

        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                return false;
            divisor +=2;
        }
        return true;
    }
}

void runda(int v[],int l){
    int x,y;
    x=v[0];
    y=v[l-1];
    for(int i=0;i<l/2;i++)
        v[i]=v[i+1];
    v[l/2-1]=x;
    for(int i=l-1;i>l/2+l%2;i--)
        v[i]=v[i-1];
    v[l/2+l%2]=y;
}

bool special(int nr){


    ////
    int x[300],k=0;
    for(int i=0;k<300;i++){
        if(isPrime(i)){
            x[k++]=i;
        }
    }
    for(int i=0;i<300;i++)
    for(int j=0;j<300 ;j++){
        if(x[i]*x[j]==nr)
            return true;
    }
    return false;
}

int getNum(int v[],int l){
    int nr=0;
        for(int i=l-1;i>=0;i--)
        {
            nr*=10;
            nr+=v[i];
        }
    return nr;
}


int main()
{
    int v,n,p1,p2,k1=0,k2=0,nr1[10],nr2[10],s1=0,s2=0;
    cin>>v>>n>>p1>>p2;

    while(p1>0){
        nr1[k1++]=p1%10;
        p1/=10;
    }
    while(p2>0){
        nr2[k2++]=p2%10;
        p2/=10;
    }

    if(v==1)
        n=1;

    for(int i=0;i<n;i++){
        runda(nr1,k1);
        runda(nr2,k2);
        int n1=getNum(nr1,k1),n2=getNum(nr2,k2);
        bool sx=special(n1),sy=special(n2),px=isPrime(n1),py=isPrime(n2);
       // cout<<n1<<" "<<n2<<" "<<sx<<" "<<sy<<" "<<px<<" "<<py<<endl;
        int ss1=0,ss2=0;
        if(n1%2==0)ss1=2; else ss1=1;
        if(n2%2==0)ss2=2; else ss2=1;
        if(px&&!py&&!sy)
            ss1=100;
        if(py&&!px&&!sx)
            ss2=100;
        if(sx&&!sy&&!py || px&&py)
            ss1=50;
        if(sy&&!sx&&!px || px&&py)
            ss2=50;
        if(sx&&sy){
            ss1=25;ss2=25;
        }
        if(px&&sy)
        {
            ss1=50;ss2=25;
        }
        if(py&&sx)
        {
            ss1=25;ss2=50;
        }
        s1+=ss1;
        s2+=ss2;

    }
    cout<<s1<<" "<<s2;

    return 0;
}
