#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int j=0,k=0;
    char word[100];
    gets(word);
    if (word[i]>96)
        k=1;
    while(word[i]!='\0')
    {
        if(word[i]<97)
            j++;
        else {
        j==0;
        break;}
    }
    if(word[1]=='\0')
        j=1;
    if((j>0 && k==1) || (j>0 && k==0))
    {
        if(k==1)
            word[0]=(word[0]-32);
        else if (k==0)
        {
            word[0]=(word[0]+32);
        }
    for(i==1;i!='\0';i++)
    {
        word[i]=(word[i]+32)
    }
    }
    printf("%s", word);
    return 0;
}
