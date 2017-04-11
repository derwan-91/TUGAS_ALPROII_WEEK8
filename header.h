#include "header.h"
int main()
{
    int IndexMenu;
    do{
        cout<<"                      Alpro II Task 1 Week 8                  "<<endl;
        cout<<"                                By                            "<<endl;
        cout<<"Anisa Latansa | Salima Zahra | Jovial Fachrul | Rizky Ramadhan"<<endl;
        cout<<"Main Menu"<<endl;
        cout<<"1.Insertion Sort\n2.Selection Sort\n3.Bubble Sort\n4.Quick Sort\n5.Exit"<<endl;
        cout<<"choose one!"<<endl;
        cin>>IndexMenu;
        switch(IndexMenu){
            case 1:
                insertion();
                    break;
            case 2:
                selection();
                    break;
            case 3:
                bubble();
                    break;
            case 4:
                quick();
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
