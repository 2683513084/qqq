#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int aee(int x)
	{   int a = 5;
		if (x == a)
          	return 1;
			
        else
            return 0;
	}
	
	printf ("����������:\n");
	
	int c = 1;
	
   // int a = 2683513084;
    
    int b = 0;
    
    scanf ("%d", &b);
    
    int  n = aee(b) ;
    
   if (n)
    
       printf ("������ȷ\n");
    
    else
    {
	    printf ("����������������\n");
    
		while (c<=3)
    	{
		   // printf ("����������������\n");
		    scanf ("%d", &b);
	
		    int n = aee(b);
		    
			if (n)
			
			{
			    printf ("������ȷ\n");	 
            
			    break;
			}   
            else
                printf("����������������\n");
                
            c++;
		}
	}
	return 0;
}
