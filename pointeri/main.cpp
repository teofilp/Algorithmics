#include <iostream>
#include <malloc.h>

using namespace std;

void p1(int *p){

    *p+=1;///creste val primului elem
    p+=1;/// pointerul merge la urmatoarea val din sir
    *p+=1;/// creste val celui de al doilea elem
    /// sirul devine {2,3,3}


}

void p2(int a,int b,int c,int v){

    *a=v[0];
    *b=v[1];
    *c=v[2];


}
void p3(int &a){

    a=2;
}
int main()
{

   int x;
   int *a;
   x=10;
   a=&x;
   (*a)++;
   cout<<*a<<" "<<a;

   /// a ia adresa lui x
    /// *a e val lui x
   /*---------------------------------------------------*/



    int v[3]={1,2,3};
    int q,w,e;
    int *d,*f,*g;
    p1(v);
    p2(&q,&w,&e,v);
/// suma stelutzelor constanta **p, p, p(==> inversul)
    int o=10;
    p3(o);
    cout<<" "<< o;

    /*--------------------------------------------------*/
///ALOCARE DINAMICA
    int **k;
    k=(int**)malloc(3*sizeof(int*));
    for(int i=0;i<3;i++){
      k[i]=(int*)malloc((i+1)*sizeof(int));
    }
    for(int i=0;i<3;i++){
        free(k[i]);
    }
    free(k);

    k=new int*[10];/// inlocuieste linia 57
 ///   k[i]=new int[i+1];

        delete k;

}
