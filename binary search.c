#include <stdio.h>
int binarysearch( int arr[] , int size , int element){

int high = 0, low =size-1 , mid;

while ( low <= high) {
 mid = (low+high)/2;
  if ( element > arr[mid]) {
    low = mid+1;
  }
 else if ( element < arr[mid]) {
    high = mid -1;

  } else {
    printf(" found the key ");
    return mid;
  }

} //printf(" key is not presnt here");
}

int main() {
int array[8] = { 1 ,2,3,4,5,6,7,8};
binarysearch( array , 8 ,64); 
//printf( "  element is present");
    return 0;

}