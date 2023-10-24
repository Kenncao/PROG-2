#include <stdio.h>
#include <string.h>

char * decimalToBinary(int num)
{
    char *value = malloc((char *) sizeof(10 * sizeof(char)));        
    int temp, counter=7;
    while (counter >=0 )
    {   	
    	if(num%2==0)
    	{
    		*(value+counter)= '0';
		}
		else
		{
			*(value+counter)= '1';
		}        
        temp = num/2;        
        num = temp;
        counter--;
    }    	
	*(value+8)= '\0';    
	
    return value;    
}

int main() {    
    printf("value is %s", decimalToBinary(12));
    return 0;
}
