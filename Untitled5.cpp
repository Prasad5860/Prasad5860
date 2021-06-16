#include<stdio.h>
 main()
 {
 	int i,j,k,a;
 	a=1;
 	printf("%d\n",a);
 	 for(i=2;i<6;i++)
 	 {
 	 	if(i%2==0)
 	 	 k=2;
 	    else
 	     k=1;
 	      for(j=1;j<=i;j++)
 	      {
		   
 	       printf("%d",k);
 	        k=k+2;
 	       }
 	    printf("\n");
 	 	 
	  }
 }
