#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

// Function Protoypes
void displayArray(int array[], int size);
void loadArrayRandom(int array[], int size);
int searchArray(int array[], int size,int value);


int main(){
   int numbers[SIZE];
   int sval;
   int loc;

   srand(time(NULL));
   loadArrayRandom(numbers,SIZE);
   displayArray(numbers,SIZE);
   printf("Enter Search Value: ");
   scanf("%d",&sval);
   loc=searchArray(numbers,SIZE,sval);
   if(loc<0){
      printf("%d not found in array\n",sval);
   }else{
      printf("%d was located at %d\n",sval,loc);
   }

   return 0;
}

void displayArray(int array[], int size){
/****************************************
 * Display the Array                    *
 ****************************************/
   int index;

   for(index=0;index<SIZE;index++){
      printf("array[%2d]:  %d\n",index,array[index]);
   }
}

void loadArrayRandom(int array[], int size){
/****************************************
 * Load the Array with Random Numbers   *
 ****************************************/
   int index;

   for(index=0;index<SIZE;index++){
      array[index]=rand()%6000; 
   }
}

int searchArray(int array[], int size,int value){
/********************************************
 * Search the Array for a value             *
 * Return Value: Location of Value in Array *
 ********************************************/
   int index;
   int location=-1;

   for(index=0;index<SIZE;index++){
      if(array[index]==value){
         location=index;
	 break;
      } 
   }
   return location;
}
