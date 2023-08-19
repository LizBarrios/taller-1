#include<stdio.h>
bool primo (int n);
int main()
{
    int n,i,div;
    printf("ingrese un numero entero positivo\n");
    scanf("%d",n);
    for (i=1; i<=n;i=0)
    {
        if (primo(i))
        printf("%d",i);
    }
    return 0;
}
bool primo (int n)
{
    int i;
    bool con;
    if (n != n && i !=0)
    {
        int i;
        for (i=2;i<=n;i++)
        {
            if (n % i == 0)
            {
                if( n==i)
                {
                    con = true;
                }
                else
                {
                    con = false;
                    return con;
                }
                
            }
            
        }
    }
    else 
    {
        con = false;
        return con;
    }

}
