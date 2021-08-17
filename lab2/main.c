#include <stdio.h>
int main () {
 FILE *fp;
 int c; char ch;
  int vowel=0,consonant=0;
 fp = fopen("file.txt","r");
 while(1) {
 c = fgetc(fp);
 if( feof(fp) ) {
 break;
 }

    {
        if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o') ||(ch=='O')||(ch=='u')||(ch=='U'))
                {
                               vowel++;
                               printf("(%c) ", ch);
                }
            else
                {
                             consonant++;
                             printf("%c ", ch);
                }
                             ch=fgetc(fp);
                }

 printf("\n\nNumber of vowels are = %d\nNumber of consonants are =%d",vowel,consonant);

 }
 fclose(fp);
 return(0);
}

