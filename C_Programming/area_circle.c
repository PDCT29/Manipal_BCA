#include <stdio.h>					/*Library file access*/

/*program to calculate the area of a circle*/		/*Title (Comment)*/

main()							/*Function heading*/
{
	float radius, area;				/*Variable declarations*/
	printf("Radius=?");				/*Output Statement(prompt)*/
	scanf("%f", &radius);				/*Input statement*/
	area=3.14159*radius*radius;			/*Assignment statemenmt*/
	printf("Area=%f\n",area);				/*Output statement*/

	return 0;
}
