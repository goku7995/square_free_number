#include <stdio.h>
#include <math.h>
int main()
{
    long int n;
    double sqrnum;
    long int i,j=0,flag,chksqr,temp[10000];
  	int sum=0,k;
    scanf("%ld",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {    
            sum++;
            sqrnum=sqrt(i);
            chksqr=sqrnum;
            if(chksqr==sqrnum)
            {
                sum--;
                temp[j]=i;
                j++;
            }
            else
            {
                for(k=0;k<j;k++)
                {
                    if(i>temp[k] && j!=0)
                    {
                        if(i%temp[k]==0)
                        {	
                          	sum--;
                        	k=j+1;
                        }
                    }
                    else
                        break;
                }
            }
        }
    }

    printf("%d",sum);
    return 0;
}
