#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
    ifstream read("expresie9.in");
    ofstream write("expresie9.out");
    int t, n,maxi=0;
    read>>t>>n;
    if(t==1){

        string str;
        for(int i=0;i<n;i++)
        {
            int s=0;
            read>>str;

            for(int i=0;i<str.size();i++){
                     if(str[i]=='+'||str[i]=='>'||str[i]=='<')
                 {
                     if(maxi<s)
                        maxi=s;
                     s=0;

                 }
                    else{
                         s=s*10+int(str[i])-96;

                    }



                if(maxi<s)
                    maxi=s;
            }

        }
        write<<maxi;

    }
    if(t==2){

        string str;
        for(int i=0;i<n;i++){
            read>>str;
            bool left_bool=true;
            bool plus_bool=true;
            int left=0;
            int right=0;
            int s1=0;
            for(int i=0;i<str.size();i++){
                if(str[i]=='+'){
                    left=left+s1;
                    s1=0;


                }
                s1=s1*10+int(str[i])-96;



            }
            left+=s1;
            cout<<left<<" ";



        }
    }


    return 0;
}
