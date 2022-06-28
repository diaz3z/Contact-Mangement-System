#include <iostream>
#include <Windows.h>

void start();
int menu();
int k = 0;


int main(){
    start();
       
}


void start()
{
    system("color 0B");
    std::cout<<"\n\n\n\n\n\n\n\n\n";
    std::cout<<"\t\t\t\t\t--------------------------------------------------\n";
    std::cout<<"\t\t\t\t\t--------------------------------------------------\n";
    std::cout<<"\t\t\t\t\t\t\tPHONE BOOK APPLICATION\n";
    std::cout<<"\t\t\t\t\t--------------------------------------------------\n\n";
    std::cout<<"\t\t\t\t\tLoading ";
    char x = 219;
    for(int i = 0; i < 35; i++){
        std::cout<<x;
        if(i<10)
        Sleep(300);
        if(i>=10 && i<20)
        Sleep(150);
        if(i>=10)
        Sleep(25);
    }
    system("cls");
}