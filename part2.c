#include <stdio.h>
/*does swapping using pointers and a temp value*/
int main()
{


    int temp;
    int x= 2;
    int y = 4;
    int z = 8;
    int *p;
    int *q;
    int *r;
    p = &x;
    q = &y;
    r = &z;

	puts("\nSwap Attack");
	puts("--------------------------");


		printf("The values of x, y, and z is: %d\t\t %d\t\t %d\n",x , y , z);
		printf("The values of p, q, and r is: %p %p %p\n",p , q , r); //address 
		printf("The values of *p, *q, and *r is: %d\t %d\t\t %d\n",*p , *q , *r);

			puts("\nSwapping Values");
			puts("----------------------------");

void swap (int x, int y, int z); {

    temp = z;
    z = x;
    x = y;
    y = temp;
    // x = 4 because y is orignially 4
    // y = 8 because temp was set to 8 via z
    // z = 2 because it was set to x which is orinally 2


	printf("The new values of x, y, and z is: %d\t\t %d\t\t %d\n",x , y , z); 
	printf("The new values of p, q, and r is: %p\t %p\t %p\n",p , q , r); //address
	printf("The new values of *p, *q, and *r is: %d\t\t %d\t\t %d\n",*p , *q , *r);
}

return 0;
}
