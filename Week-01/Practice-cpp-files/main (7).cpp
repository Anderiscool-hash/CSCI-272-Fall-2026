/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


void printArray(const int numbers [], int size){
    for ( int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    
}
cout << endl;
}
int findMax (const int numbers[], int size) {
    int maximum = numbers[0];
    for( int i = 1; i < size; i++){
        if( numbers[i] > maximum){
            maximum = numbers[i];
        }
    }
    
    return maximum;
}

int main()
{
 
int values[6] = {1, 10 , 8 , 17 ,9 ,15};
 int result = findMax(values, 6);
 cout << result;
 //printArray(values, 6);


    return 0;
}