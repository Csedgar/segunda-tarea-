#include<stdio.h>
//funcion q concatena dos cadenas
void conca(char *xs, char *ys){
    int i, j;
    i=j=0;
    while(*(xs+i)!='\0')
        i++;
    while((*(xs+i)=*(ys+j))!='\0'){
        i++;
        j++;
    }
}

//tamanho de un string
int len(char *xs){
    int i=0;
    while(*(xs+i)!='\0')
       ++i;
    return i;
}
//funcion q evalua si el final de una cadena es similar a otra cadena
int stlast(char *xs, char *ys)
{
    int i, j, val;
    int tx=len(xs);
    int ty=len(ys);
    for(i=0;i<tx;i++){
        val=0;
        for(j=(ty-tx-1);j<ty;j++){
            if(*(xs+i)==*(ys+j)){
                val=1;
                break;
            }
        }
        if(val==0)
            return val;
    }
    return val;
}

int bitemayus(int a){
    int b;
    b=a-32;
    int rpta= (a&b);
    //a = 1100001;
    //A = 1000001;
    return rpta;
}

void cadenamayus(char *xs){
    int tam=len(xs);
    int i;
    for(i=0;i<tam;i++){
        if(*(xs+i)!=' ')
            *(xs+i)=bitemayus(*(xs+i));
    }
}

int main(){
    
    char mol[]="mol";
    char rav[]="ravinof";
    int i=0;
    int j=0;
    concatenar_n(mol,rav,i,j);
    printf("%s",mol);
   
   
    char gg[]="def";
    int c=stlast(gg,name);
    int d=stlast(t,name);
    printf("%d %d",c,d);
    
    char a='a';
    char b=bitemayus(a);
    printf("%c",b);
  
    char band[]="radio head";
    cadenamayus(band);
    printf("%s",band);
}
