#include<stdio.h>
#include<math.h>
int main(){
    float radius_circle = 4; 
	const float PI = 3.14;
	float diameter_of_a_ircle = (radius_circle*2)*PI;
	float circle_area = (radius_circle*radius_circle)*PI;
	printf("Hinh chu nhat co dien tich: %.1f và chu vi: %.1f", diameter_of_a_ircle,circle_area);
	}	
