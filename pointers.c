//
//  main.c
//  pointers
//
//  Created by Gaston Seneza on 1/2/17.
//  Copyright © 2017 GastonSeneza. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int radius = 25;
//    int area = radius * length;
//    printf("area = %d", area);
    
    // Pointers: Type of pointers depend on what they point to
    int *radiusPointer = &radius;
    int *otherRadiusPointer;
    otherRadiusPointer = radiusPointer;
    int r = *radiusPointer;
    printf("r = %d\n", r);
    printf("radius address = %u\n", &radius);//prints the address of radius on the screen
    printf("Value pointed to by radius pointer = %d\n", *radiusPointer);//prints the value pointed to by the radiusPointer i.e 25
    printf("value in pointer = %d\n", *&radius);// Also prints 25
    printf("radius address by radius pointer = %u\n", radiusPointer);
    printf("radius pointer = %u\n", &radiusPointer);//address of radius pointer
    //Pointers need to know what type they point to so we can do something more interesting called pointer arithmetic
    
    printf("address of radius pointer = %u\n", &otherRadiusPointer);
    
    double sideLength = 45.3;
    double *sidePointer = &sideLength;
    double *anotherSidePointer = sidePointer;
    double area = (*sidePointer) * (*anotherSidePointer);
    printf("%.2f\n", area);
    
    float rayon = 34.5;
    float *rayonPtr = &rayon;
    float *anotherRayonPtr = rayonPtr;
    
    printf("%.2f\n" , *rayonPtr);
    printf("%.2f\n", *&rayon);
    return 0;
}
