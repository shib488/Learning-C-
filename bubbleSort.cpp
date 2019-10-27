/**
 * @Author: Rishav Kumar <rishavk773>
 * @Email: rishavk773@gmail.com
 */

 /* Time Complexity:-
  *       Best case = n
  *       Average case = n^2
  *       worst case = n^2
  *
  * INPUT : 12  11  31  4  23  -5  99  31  11
  * OUTPUT : Initial array elements : 12  11  31  4  23  -5  99  31  11
  *          After sorting array elements : -5  4  11  11  12  23  31  31  99
  */

#include <iostream>
#include <stdlib.h>
#include "header.h"
using namespace std;

int main(int argc,char* argv[])
{
    int i,ar[argc-1];
    for(i=1;i<argc;i++)
        ar[i-1]=atoi(argv[i]);
    cout<<"Initial array elements : ";
    traverse(ar,argc-1);
    bubbleSort(ar,argc-1);
    cout<<"After sorting array elements : ";
    traverse(ar,argc-1);
    return 0;
}
