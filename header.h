#include <iostream> // standar header unutk c++
#include <stdio.h> //standar header untuk c
#include <cstdlib> //header untuk keluar program exit(0);
using namespace std;


//prosedur and function
void insertion(){
cout<<"welcome in insertion sort"<<endl;
}

void selection(){
cout<<"welcome in selection sort"<<endl;
}

void bubble(){
cout<<"welcome in bubble sort"<<endl;
}

//ini adalah bagian quick sort
void quick_sort(int[],int,int);
int partition(int[],int,int);

void quick_sort(int a[],int l,int u){
 int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}


