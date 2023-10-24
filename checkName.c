#include<stdio.h>
#include<string.h>

struct multiDA{
  char name[5][20];  
  char anotherName[20];
};

struct multiDA return_arr()
{
    struct multiDA temp;
    int i;
    for(i=0;i<5;i++)//checking purpose
    {
        strcpy(temp.name[i],"name");
    }
    strcpy(temp.anotherName,"another name"); 
    return temp;
}
int main()
{
    struct multiDA temp;
    temp = return_arr();
    int i;
    for(i=0;i<5;i++)
    {  
        printf("%s ",temp.name[i]);
    }
    printf("\n%s ",temp.anotherName);
    
    
    return 0;
}
