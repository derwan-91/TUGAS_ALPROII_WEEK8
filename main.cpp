#include "header.h"
int main()
{
    int IndexMenu;
    int a[100],i,n,j,temp;
        do{
            cout<<endl;
            cout<<"                                   Alpro II Task 1 Week 8                               "<<endl;
            cout<<"                                             By                                         "<<endl;
            cout<<"Anisa Latansa | Salima Zahra | Jovial Fachrul | Rizky Ramadhan | Dedeh Iryawan | Shofari"<<endl;
            cout<<"Main Menu"<<endl;
            cout<<"1.Insertion Sort\n2.Selection Sort\n3.Bubble Sort\n4.Quick Sort\n5.Exit"<<endl;
            cout<<"choose one!"<<endl;
            cin>>IndexMenu;
                switch(IndexMenu)
                {
                    case 1:
                        insertion();
                        break;

                    case 2:
                        cout<<"How Many Element\n";cin>>n;
                        cout<<"\nEnter Elements:\n";
                            for(i=0;i<n;i++)
                            {
                            cout<<"\nEnter:";cin>>a[i];
                            }
                                s_sort(a,n);
                                cout<<"\nAfter Sorting\n";
                                    for(i=0;i<n;i++)
                                    {
                                    cout<<a[i]<<"\t";
                                    }
                                    getch();
                                    cout<<"\n"<<endl;
                        break;

                    case 3:
                        bubble();
                        break;

                    case 4:
                        cout<<"How many elements?";cin>>n;
                        cout<<"\nEnter array elements:\n";
                        for(i=0;i<n;i++)
                            cin>>a[i];
                            quick_sort(a,0,n-1);
                            cout<<"\nArray after sorting:";
                                for(i=0;i<n;i++)
                                    cout<<a[i]<<" ";
                                    cout<<"\n"<<endl;
                        break;

                    case 5:
                        exit(0);
                    break;

                    default :
                        cout<<"tidak ada dalam pilihan"<<endl;
                    break;
            }
        }while(IndexMenu!=5);
    return 0;
}
