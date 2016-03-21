#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

bool isSimple(int n)
{
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(!(n%i)) return false;
    }
    return true;
}

char * getStr(int n)
{
    char * str = new char[n+1];
    for(int i=0; i<n; i++)
        str[i]='*';
    return str;
}


int main()
{
    int n = 256;
    char * inStr = new char[n];
    cin.getline(inStr, n);
    n = strlen(inStr)+1;
    char * outStr = new char[n];
    //strcpy(outStr, "fds");
    char * p = strtok(inStr, " ,.?/-!");
    while(p)
    {
        if(isSimple(strlen(p)))
        {
            strcat(outStr, getStr(strlen(p)));
        }
        else
        {
            /*strcmp(outStr + strlen(outStr)+1, p);
            outStr[strlen(outStr)+1] = ' ';*/
            strcat(outStr, p);
        }
        strcat(outStr, " ");
        p = strtok(NULL, " ,.?/-!");
    }
    cout << outStr << endl;
    delete[] inStr;
    delete[] outStr;
    delete[] arr;
    return 0;
}
