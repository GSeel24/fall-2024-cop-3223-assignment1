#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi=3.14159

// x values
double getx1(){

    double xvalue1=0.0;

    return xvalue1;
}

double getx2(){

    double xvalue2=1.0;

    return xvalue2;
}

//y values

double gety1(){

    double yvalue1=0.0;

    return yvalue1;
}

double gety2(){

    double yvalue2=1.0;

    return yvalue2;
}

// sides can be determined if we assume that the two points are opposite corners and the distance between them is the diagonal
//

double getsidex() {

    return getx2()-getx1();
}

double getsidey() {

    return gety2()-gety1();
}



//distance

double calculateDistance() {

    printf("Distance: \n\n");

    double distance=sqrt(pow(getx2()-getx1(), 2)+pow(gety2()-gety1(), 2));

    printf("Point 1: x1 = %lf, y1 = %lf\n", getx1(), gety1());
    printf("Point 2: x2 = %lf, y2 = %lf\n", getx2(), gety2());


    //CalcDist(xvalue1,yvalue1,xvalue2);

    printf("The distance between the two points is %lf units\n\n\n", distance);


    return distance;
}

//perimeter

double calculatePerimeter() {

    printf("Perimeter: \n\n");

    double perimeter= 2*getsidex() + 2*getsidey();

    printf("Point 1: x1 = %lf, y1 = %lf\n", getx1(), gety1());
    printf("Point 2: x2 = %lf, y2 = %lf\n", getx2(), gety2());

    printf("The perimeter of the city encompassed by your request is %lf \n\n\n", perimeter);


    return 5.0;
}

double calculateArea() {

    printf("Area: \n\n");

    double Area = getsidex() * getsidey();

    printf("Point 1: x1 = %lf, y1 = %lf\n", getx1(), gety1());
    printf("Point 2: x2 = %lf, y2 = %lf\n", getx2(), gety2());

    printf("The area of a city encompassed by the given points is %lf\n\n\n", Area);

    return 5.0;
}

double calculateWidth() {

    printf("Width: \n\n");

    printf("Point 1: x1 = %lf, y1 = %lf\n", getx1(), gety1());
    printf("Point 2: x2 = %lf, y2 = %lf\n", getx2(), gety2());

    printf("The width of the city encompassed by your request is %lf\n\n\n", getsidex());


    return 5.0;
}

double calculateHeight() {

    printf("Height: \n\n");

    printf("Point 1: x1 = %lf, y1 = %lf\n", getx1(), gety1());
    printf("Point 2: x2 = %lf, y2 = %lf\n", getx2(), gety2());

    printf("The height of the city encompassed by your request is %lf\n\n\n", getsidey());

    return 5.0;
}


int main(int argc, char **argv) {


    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();


    return 1;
}

