/**
 * @Author: Rishav Kumar <rishavk773>
 * @Email: rishavk773@gmail.com
 */

 /* 
  * Binary search algo
  * INPUT : 10
  * OUTPUT : Index of 10 is 4
  */

#include <iostream>
#include <stdlib.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int s) 
{
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (arr[mid] == s)
            return mid+1;

        if (arr[mid] < s)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return -1;
}

int main(int argc,char* argv[])
{
    int arr[] = {2, 3, 4, 10, 40, 50};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, atoi(argv[1]));
    cout<<"Index of "<<atoi(argv[1])<<" is "<<result;
    return 0;
}