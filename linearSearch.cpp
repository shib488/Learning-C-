/**
 * @Author: Rishav Kumar <rishavk773>
 * @Email: rishavk773@gmail.com
 */

 /* 
  * INPUT : 10
  * OUTPUT : Index of 10 is 4
  */

#include <iostream>
#include <stdlib.h>
using namespace std;

int linearSearch(int arr[], int size, int item) 
{
    for(int i=0;i<=size;i++)
    {
        if(arr[i]==item)
            return i+1;
    }
    return -1;
}

int main(int argc,char* argv[])
{
    int arr[] = {1, 3, 4, 10, 40, 50};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int result = linearSearch(arr, n-1, atoi(argv[1]));
    cout<<"Index of "<<atoi(argv[1])<<" is "<<result;
    return 0;
}