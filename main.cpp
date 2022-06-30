#include <iostream>
#include <Windows.h>

void start();
int menu();
int k = 0;

int main()
{
    start();
    std::string name[100];
    std::string no[100];
    int check = 0;
    check = menu();
    do {
        //Add contact
        if(check == 1)
        {
            std::cout<<"\t\t\t\t\t\t Name : ";
            std::cin>>name[k];
            std::cout<<"\t\t\t\t\t\t Phone NO. : ";
            std::cin>>no[k];
            k++;
        }
        //display contact
        else if(check == 2)
        {
            for(int i = 0; i < 100; i++)
            {
                if(name[i] != "\0")
                std::cout<<"\t\t\t\t\t\t Name : "<<name[i]<<"       Phone : "<<no[i]<<"\n";
            }
        }
        //search by number
        else if(check == 3)
        {
            std::string temp;
            std::cout<<"\t\t\t\t\tNumber: ";
            std::cin>>temp;
            for(int i = 0; i < 100; i++)
            {
                if(temp == no[i])
                {
                    std::cout<<"\t\t\t\t\tNumber is Found\n: ";
                    std::cout<<"\t\t\t\t\tNumber: "<<name[i]<<"       Phone : "<<no[i];
                }
            }
        }
        //search by name
        else if(check == 4)
        {
            
        }
        //update
        else if(check == 5)
        {
            
        }
        //delete
        else if(check == 6)
        {
            
        }
        //delete all
        else if(check == 7)
        {
            
        }
        //Display no. of contact
        else if(check == 8)
        {
            
        }
        check = menu();
    }
}
int menu()
{
    std::cout << "\n\n\n\n\n\n";
    std::cout << "\t\t\t\t\t\t----------------------------------------------\n";
    std::cout << "\t\t\t\t\t\t----------------------------------------------\n";
    std::cout << "\t\t\t\t\t\t|            CONTACT MANEGMENT SYSTEM        |\n";
    std::cout << "\t\t\t\t\t\t----------------------------------------------\n";
    std::cout << "\t\t\t\t\t\t|                                            |\n";
    std::cout << "\t\t\t\t\t\t|          [1]Add Contact                    |\n";
    std::cout << "\t\t\t\t\t\t|          [2]Display All Contact            |\n";
    std::cout << "\t\t\t\t\t\t|          [3]Search by Number               |\n";
    std::cout << "\t\t\t\t\t\t|          [4]Search by Name                 |\n";
    std::cout << "\t\t\t\t\t\t|          [5]Update                         |\n";
    std::cout << "\t\t\t\t\t\t|          [6]Delete                         |\n";
    std::cout << "\t\t\t\t\t\t|          [7]Delete All                     |\n";
    std::cout << "\t\t\t\t\t\t|          [8]Total numbers of Contacts      |\n";
    std::cout << "\t\t\t\t\t\t----------------------------------------------\n";
    std::cout << "\t\t\t\t\t\t|          [9]Exit                           |\n";
    std::cout << "\t\t\t\t\t\t----------------------------------------------\n";
    int a;
    std::cout << "Enter Your Choice";
    std::cin >> a;
}

void start()
{
    system("color 0B");
    std::cout << "\n\n\n\n\n\n\n\n\n";
    std::cout << "\t\t\t\t\t--------------------------------------------------\n";
    std::cout << "\t\t\t\t\t--------------------------------------------------\n";
    std::cout << "\t\t\t\t\t\t\tPHONE BOOK APPLICATION\n";
    std::cout << "\t\t\t\t\t--------------------------------------------------\n\n";
    std::cout << "\t\t\t\t\tLoading ";
    char x = 219;
    for (int i = 0; i < 35; i++)
    {
        std::cout << x;
        if (i < 10)
            Sleep(300);
        if (i >= 10 && i < 20)
            Sleep(150);
        if (i >= 10)
            Sleep(25);
    }
    system("cls");
}