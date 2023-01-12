#include <stdio.h>
 int linearsearch( int arr[] , int size, int key) {
    for ( int i = 0; i<size; i++) {
        if ( arr[i]  == key ) {
            printf("key is present");
            return i;
        } else {
            printf(" not presnt");
        }
    }
 }
 int main() {
  
  int array[6] = { 4,7,3,2,8,9};
  //Added new comment
  linearsearch( array , 6, 1);
    return 0;

}