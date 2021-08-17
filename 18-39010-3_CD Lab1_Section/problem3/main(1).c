#include <stdio.h>
#include <stdlib.h>
void comnt_multi () ;
void comnt_single () ;
void comnt_chk (char) ;
FILE *f1 , *f2;
int main(void){
    char c;
    f1 = fopen ("C:/Users/Feekra/Desktop/compiler design/18-39010-3_CD Lab1_Section/problem3/read.txt","r") ;
    f2 = fopen ("C:/Users/Feekra/Desktop/compiler design/18-39010-3_CD Lab1_Section/problem3/write.txt","w") ;

    while((c=fgetc(f1))!=EOF)
        comnt_chk(c);
        fclose(f1);
        fclose(f2);

    return 0;
}
void comnt_chk(char c){
    char a;

    if(c=='/')
    {
        if((a=fgetc(f1))=='/')
         comnt_single();

        else if(a=='*')
        {
          comnt_multi();

        }
        else
        {
            fputc(c,f2);
            fputc(a,f2);
        }
    }
    else
        fputc(c,f2);
}
void comnt_single(){
 char a,b;

    while((a=fgetc(f1))!=EOF)
    {
        if(a=='\n')
            return;

    }

}
void comnt_multi(){
char a,b;

    while((a=fgetc(f1))!=EOF)
    {
        if(a=='*')
        {
            b=fgetc(f1);
            if(b=='/')
                return;
        }
   }

}

