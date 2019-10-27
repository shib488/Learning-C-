#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


void traverse(int a[],int len)
{
    for(int i=0;i<len;i++)
        cout<<a[i]<<"  ";
    cout<<"\n";
}


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


void bubbleSort(int a[],int len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}


void selectionSort(int a[],int len) 
{ 
	int i,j,min; 
	for(i=0;i<len-1;i++) 
	{ 
	     min=i; 
	     for(j=i+1;j<len;j++) 
            	if(a[j]<a[min]) 
                min=j; 
	     swap(&a[min],&a[i]); 
	} 
} 


void insertionSort(int a[],int len)
{
    int i,j;
    for(i=1;i<len;i++)
    {
        for(j=i;j>0;j--)
            if(a[j]<a[j-1])
                swap(&a[j],&a[j-1]);
    }
}


int change(int a[],int low,int high)
{
    int i,j,k=low-1;
    int pivot=a[high];
    for(i=low;i<high;i++)
    {
        if(a[i]<=pivot)
        {
            k++;
            swap(&a[k],&a[i]);
        }
    }
    swap(&a[k+1],&a[high]);
    return k+1;
}
void quickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot = change(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}


void combine(int a[], int low, int mid, int high)
{
    int b[100];
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];

    while (j <= high)
        b[k++] = a[j++];

    k--;
    while (k >= 0) {
        a[low + k] = b[k];
        k--;
    }
}
void mergeSort(int a[],int low,int high)
{
    //traverse(a,high);
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,0,mid);
        mergeSort(a,mid+1,high);
        combine(a,low,mid,high);
    }
}


