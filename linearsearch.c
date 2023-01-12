#include <stdio.h>
 int linearsearch( int arr[] , int size, int key) {
    int flag=0;
    int location;
    for ( int i = 0; i<size; i++) {
        if ( arr[i]  == key ) {
            flag=1;
            location=i;
           break;
        }
    }
    if(flag==1){
        printf("Present! At location %d",location+1);
    }else{
        printf("Not present!");
    }
 }
 int main() {
  
  int array[6] = { 4,7,3,2,8,9};
  //Added new comment
  linearsearch( array , 6, 2);
    return 0;
}