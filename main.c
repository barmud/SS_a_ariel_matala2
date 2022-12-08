#include <stdio.h>
#include "my_mat.h"
int main(int argc, char const *argv[])
{
char c;
int a,b;
scanf("%c",&c);
while (c!= 'D')
{
    switch (c)
    {
    case 'A':
        getValues();
        break;
    
    case 'B':
        scanf("%d",&a);
        scanf("%d",&b);
        IsPath(a,b);
        break;
    
    case 'C':
        scanf("%d",&a);
        scanf("%d",&b);
        ShortestPath(a,b);  
        break;
    }
    scanf("%c",&c);
}
return 0;
}
