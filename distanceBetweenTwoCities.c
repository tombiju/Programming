/***************************
*Distance Between Two Cities
*By Tom Biju
****************************/
//first project using Atom Text Editor
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double calculateDistance(double latitude1, double longitude1,double latitude2, double longitude2);
void convertUnits(int unit, double distance);
void userInput(char * cityName);

int main()
{
  int unit;// stores user's choice of unit for the distance
  char  city1Name[100]; //Prompting user for city names and latitude/lognitude coordinates
  char  city2Name[100];
  double latitude1;
  double longitude1;
  double latitude2;
  double longitude2;
  printf("Enter the latitude and longitude of the cities\n");
  printf("(latitude,longitude) Ex: for Chicago, (41.881832,-87.623177)");
  printf("Enter the name of City 1:\n");
  fgets(city1Name,100,stdin);//keeps taking in user input until a newline is entered; this allows for city names with spaces (EX: San Antonio); much more secure than scanf
  printf("Enter the Name of City 2:\n");
  fgets(city2Name,100,stdin);
  printf("Enter the latitude for %s\n", city1Name);
  scanf("%lf", &latitude1); //storing values in memory locations using "&" for access in functions later on
  printf("Enter the longitude for %s\n", city1Name);
  scanf("%lf", &longitude1);
  printf("Enter the latitude for %s\n", city2Name);
  scanf("%lf", &latitude2);
  printf("Enter the longitude for %s\n", city2Name);
  scanf("%lf", &longitude2);
  printf("Enter what unit you would like for the distance to be calculated in\n");
  printf("Enter 0 for kilometers, 1 for hectometers, 2 for decameters, \n");
  printf("3 for meters, 4 for decimeters, 5 for centimeters, 6 for millimeters, 7 for miles, \n");
  printf("8 for feet, 9 for yards, and 10 for inches\n");
  scanf("%d", &unit);
  double distance=calculateDistance(latitude1,longitude1,latitude2,longitude2);
  convertUnits(unit, distance);  //applying user selected units to the calculated distance
  return 0;
}

double calculateDistance(double latitude1, double longitude1,double latitude2, double longitude2){  //haversine code based off of rosettacode.org's version (http://rosettacode.org/wiki/Haversine_formula#C)
  double radiusOfEarth=6371; //radius of Earth in kilometers
  double convertToRadians=(3.1415926536/180); //fraction used to convert to radians
  double dx, dy, dz;
	longitude1 -= longitude2;
	longitude1 *= convertToRadians, latitude1 *= convertToRadians, latitude2 *= convertToRadians;
	dz = sin(latitude1) - sin(latitude2);
	dx = cos(longitude1) * cos(latitude1) - cos(latitude2);
	dy = sin(longitude1) * cos(latitude1);
	double result= asin(sqrt(dx * dx + dy * dy + dz * dz) / 2) * 2 * radiusOfEarth;
  return result;
}

void convertUnits(int unit, double distance){
  if(unit==0){
    printf("%lf kilometers", distance);
  }
  else if(unit==1){
    distance=distance*10;
    printf("%lf hectometers", distance);
  }
  else if(unit==2){
    distance=distance*100;
    printf("%lf decameters", distance);
  }
  else if(unit==3){
    distance=distance*1000;
    printf("%lf meters", distance);
  }
  else if(unit==4){
    distance=distance*10000;
    printf("%lf decimeters", distance);
  }
  else if(unit==5){
    distance=distance*100000;
    printf("%lf centimeters", distance);
  }
  else if(unit==6){
    distance=distance*1000000;
    printf("%lf millimeters", distance);
  }
  else if(unit==7){
    distance=distance*0.621371;
    printf("%lf miles", distance);
  }
  else if(unit==8){
    distance=distance*3280.84;
    printf("%lf feet", distance);
  }
  else if(unit==9){
    distance=distance*1093.61;
    printf("%lf yards", distance);
  }
  else if(unit==10){
    distance=distance*39370.1;
    printf("%lf inches", distance);
  }
  else{
    printf("%lf kilometers (unit choice was not valid)", distance);
  }
  printf("\n");
}
