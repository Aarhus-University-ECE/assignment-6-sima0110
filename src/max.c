#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{ 
assert(size > 0); //checks the precondition//
int max = number[0] //considers the first elemenent as "max"//
for (int i = 0; i < size; i++){
    if (numbers[i]> max){ //compares the other elements wirth "max"//
        max = numbers[i]; //if an element is bigger than "max", it becomes the new max value//
    }
}
    return max;
}
