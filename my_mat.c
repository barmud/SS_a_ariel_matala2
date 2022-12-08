#include <stdio.h>
#include "my_mat.h"

//we declare infinity value as *sign* integer maximum number
#define infinity __INT_MAX__
#define hasPath arr[i][j] !=0 && arr[i][j]<infinity

void OrganizeArr();
int getMin(unsigned int n1,unsigned int n2);

int arr[10][10];

//minimum functuion bettwen 2 unsinged numbers
int getMin(unsigned int n1,unsigned int n2)
{
    if (n1<n2)
    {
        return n1;
    }
    return n2;
}
//function 1 - scan the values of the arr
void getValues()
{
    for (size_t i = 0; i < 10; i++)
    {
      for (size_t j = 0; j < 10; j++)
      {
        scanf("%d",&arr[i][j]);
        if (i != j && arr[i][j] == 0)
        {
            arr[i][j] = infinity;
        }   
      }
    }
    OrganizeArr();
}
//organize the arr that data in row i and column j is the shortest path by weight bettwen i,j
void OrganizeArr()
{
    for (size_t k = 0; k < 10; k++)
    {
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j< 10; j++)
        {
            if (i!=j && i!=k && j!=k)
            {            
                arr[i][j] = getMin((unsigned int)arr[i][j] , (unsigned int)(arr[i][k]) + (unsigned int)arr[k][j]);   
            }
        }
    }
    }
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if (i!=j && arr[i][j] == infinity)
            {
                arr[i][j] = 0;
            } 
        }
    }
}
//function 2 - check if there is a path bettwen i and j
void IsPath(int i,int j)
{
    if (hasPath)
    {
        printf("True\n");
    }
    else
    {
    printf("False\n");
    }
}
//function 3 - return the weight of the shortest path bettwen i an j , if there is not path return -1
void ShortestPath(int i,int j)
{  
    if (hasPath)
    {
      printf("%d\n",arr[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}
