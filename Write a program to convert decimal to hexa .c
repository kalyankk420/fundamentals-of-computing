#include <stdio.h>
#include <math.h>

void decToHexa(int n) 
{    
    char hexaDeciNum[100]; 
    int i = 0; 
    while(n!=0) 
    {    
        int temp  = 0; 
        temp = n % 16; 
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
        n = n/16; 
    } 
    printf("Hexadecimal number: "); 
    for(int j=i-1; j>=0; j--) 
        printf("%c", hexaDeciNum[j]); 
}

int main() 
{    
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decToHexa(n);
    return 0;
}
