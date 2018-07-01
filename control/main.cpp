#include <iostream>
    #include <fstream>
    using namespace std;
    int control(int n){
        int s;
        while(n>9){
            s=0;
            while(n){
                s+=n%10;
                n/=10;

            }
            n=s;
        }
        return n;
    }
    int main()
    {
        ifstream read("control.in");
        ofstream write("control.out");
        int n,c,l,k=0,s=0,p;
        read>>n>>c>>l;
        int v[n];
        for(int i=0;i<n;i++)
            read>>v[i];

        for(int i=0;i<n;i++){

            for(int j=i;j<n && j<i+l;j++){
                       s+=v[j];
                       if(control(s)==c){
                        k++;
                       }
                }
            s=0;
        }
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";

        cout<<endl<<k;
        return 0;
    }
