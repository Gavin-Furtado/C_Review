#include  <stdio.h>
#include <stdlib.h>
#include <math.h>

float area_sphere(float radius){
    float area = 0;
    area = 4 * 3.142 *pow(radius,2); 
    return area;
}

float volume_sphere(float radius){
    float volume = 0;
    volume = (4/3) * 3.142 *pow(radius,3); 
    return volume;
}

int main(){
    float radius = 0;
    float area = 0;
    float volume =0;

    printf("Enter the radius of the sphere:\n");
    scanf("%f",&radius);

    area = area_sphere(radius);
    volume = volume_sphere(radius);

    printf("The area  of the sphere is %1.2f\n",area);
    printf("The area  of the sphere is %1.3e\n",area);

    printf("The volume  of the sphere is %1.2f\n",volume);
    printf("The volume  of the sphere is %1.3e\n",volume);
    return EXIT_SUCCESS;
}