#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool chckSen(char str[])
{
    int len = strlen(str);
    if (str[0] < 'A' || str[0] > 'Z')
        return false;

    if (str[len - 1] != '.')
        return false;

    int prepos = 0, curpos = 0;

    int index = 1;

while (str[index])
    {
        if (str[index] >= 'A' && str[index] <= 'Z')
            curpos = 0;
        else if (str[index] == ' ')
            curpos = 1;
        else if (str[index] >= 'a' && str[index] <= 'z')
            curpos = 2;
        else if (str[index] == '.')
            curpos = 3;
        if (prepos == curpos && curpos != 2)
            return false;

        if (prepos == 2 && curpos == 0)
            return false;
        if (curpos == 3 && prepos != 1)
            return (str[index + 1] == '\0');
        index++;

        prepos = curpos;
    }
    return false;
}


int main()
{
    char *str[] = { "My name is Feekra Baset Baishakhi.", "NONe is here.","My Id is in number.", "I likE usa." };

    int size = sizeof(str) / sizeof(str[0]);
    int a = 0;
    for (a = 0; a < size; a++)
     if(chckSen(str[a]))
     {
         printf("%s" " --> Grammer is valid \n", str[a]);
     }
     else{
         printf("%s" " --> Grammer is not valid \n", str[a]);
     }

    return 0;
}
