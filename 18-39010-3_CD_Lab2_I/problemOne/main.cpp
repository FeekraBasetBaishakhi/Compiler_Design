#include <iostream>
using namespace std;
bool isOperand(char c) { return (c >= '0' && c <= '9' || c>='a' && c<='z'); }
int value(char c)
{
    return (c - '0' && 'a');
}
int evaluate(char *exp)
{
    if (*exp == '\0')
    return 0;

    int opvalid = value(exp[0]);


    for (int i = 1; exp[i]; i += 2)
    {
        char oprator = exp[i], operand = exp[i+1];

        if (!isOperand(operand))
        return 0;

         if (oprator == '+') ;
        else if (oprator == '-') ;
        else if (oprator == '*') ;
        else if (oprator == '/');



        else{


            return 0;
    }
    return opvalid;
}
}
int main()
{
    char exp1[] = "1*2";
    int opvalid = evaluate(exp1);
    if(opvalid == 0)
    {cout << exp1 << " --> is " << "Not valid \n"<<endl;
    }
    else{
                 cout <<exp1 <<" --> is " << "Valid\n" << endl;
    }

    char exp2[] = "d+b+c";
    opvalid = evaluate(exp2);

    if(opvalid == 0)
    {cout << exp2 << " --> is " << "Not valid\n"<<endl;
    }
    else{
         cout  << exp2 <<" --> is "<< " Valid\n" << endl;
    }

    char exp3[] = "(1-+2)";
    opvalid = evaluate(exp3);
    if(opvalid == 0)
    {cout << exp3 << " --> is " << "Not valid\n"<<endl;
    }
    else{
          cout << exp3 << " --> is " << " Valid\m"<< endl;
    }
    return 0;
}

