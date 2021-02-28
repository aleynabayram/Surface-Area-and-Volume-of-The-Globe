/*The code calculates the surface area and volume of the globe */

#include <stdio.h>
	int main () {

	float radius;
	float area;
	float volume;
	const double PI = 3.14159265;

	printf("Please enter the radius of the globe:");
	scanf("%f" , &radius);

	area = 4*PI*(radius*radius);
	volume= ((4*PI)/3)*radius*radius*radius;
	
	printf("The surface area of the globe is %.2f\n" ,area);
	printf("The volume of the globe is %.2f" ,volume);
	
	return 0;
}
