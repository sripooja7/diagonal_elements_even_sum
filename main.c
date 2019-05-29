/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,m,n,sum=0;
    printf("Enter the no.of rows and cols");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          scanf("%d",&a[i][j]);
      }
    }
    printf("The matrix elements are");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    printf("The sum of diagonal elements whose digits are even");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i==j)
        {
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
        }
      }
    }
    printf("%d",sum);
    return 0;
}
