/* Triangle pattern
    * * * * * 
    *       * 
    *       * 
    *       * 
    * * * * * 
*/
#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows:");
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==0 || j==0 ||i== r-1||j==r-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
