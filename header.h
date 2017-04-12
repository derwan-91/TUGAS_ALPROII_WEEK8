#include <iostream> // standar header unutk c++
#include <stdio.h> //standar header untuk c
#include <cstdlib> //header untuk keluar program exit(0);
#include <conio.h>

using namespace std;


/*ini adalah bagian kumpulan prosedur and function untuk sorting
 *
 *
 */

//ini adalah bagian insertion sort
void insertion()
{
    int a[100],i,n,j,temp;
        cout<<"Enter the number of elements:"<<endl;cin>>n;
        cout<<"\nEnter the elements\n"<<endl;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
                for(i=1;i<=n-1;i++)
                {
                    temp=a[i];
                    j=i-1;
                    while((temp<a[j])&&(j>=0))
                    {
                        a[j+1]=a[j];    //moves element forward
                        j=j-1;
                    }
                    a[j+1]=temp;    //insert element in proper place
                }
            cout<<"\nSorted list is as follows"<<endl;
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<"    ";
            }
}
//ini adalah akhir bagian insertion sort

//ini adalah bagian bubble sort
void bubble()
{
int a[100],i,n,j,temp;
    cout<<"Enter the size of array: ";cin>>n;
    cout<<"Enter the array elements: \n";
        for(i=0;i<n;++i)
            cin>>a[i];
                for(i=1;i<n;++i)
                {
                    for(j=0;j<(n-i);++j)
                        if(a[j]>a[j+1])
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
            cout<<"Array after bubble sort:";
                    for(i=0;i<n;++i)
                        cout<<" "<<a[i];
                        cout<<endl;
}
//ini adalah akhir bagian bubble sort

// ini adalah bagian selection sort
template <class T>
void s_sort(T a[],int n)
{
     int i,j,t;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i]) //for descending order use if(a[j]>a[i])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
}
//ini adalah akhir bagian selection sort


//ini adalah bagian quick sort
void quick_sort(int[],int,int);
int partition(int[],int,int);

void quick_sort(int a[],int l,int u)
{
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
//ini adalah akhir bagian quick sort


