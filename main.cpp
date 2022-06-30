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
    int totalContacts = 0;
    check = menu();
    do
    {
        // Add contact
        if (check == 1)
        {
            std::cout << "\t\t\t\t\t\t Name : ";
            std::cin >> name[k];
            std::cout << "\t\t\t\t\t\t Phone NO. : ";
            std::cin >> no[k];
            k++;
            totalContacts++;
        }
        // display contact
        else if (check == 2)
        {
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (name[i] != "\0")
                    std::cout << "\t\t\t\t\t\t Name : " << name[i] << "       Phone : " << no[i] << "\n";
                check2++;
            }
            if (check2 == 0)
            {
                std::cout << "\t\t\t\t\t\tYour contact list is empty \n";
            }
        }
        // search by number
        else if (check == 3)
        {
            std::string temp;
            std::cout << "\t\t\t\t\tNumber: ";
            std::cin >> temp;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (temp == no[i])
                {
                    std::cout << "\t\t\t\t\tNumber is Found\n: ";
                    std::cout << "\t\t\t\t\tNumber: " << name[i] << "       Phone : " << no[i];
                    check2++;
                }
            }
            if (check2 == 0)
            {
                std::cout << "\t\t\t\t\tThis name is not Found in your contact list\n";
            }
        }
        // search by name
        else if (check == 4)
        {
            std::string temp;
            std::cout << "\t\t\t\t\tName : ";
            std::cin >> temp;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (temp == name[i])
                {
                    std::cout << "\t\t\t\t\tName is Found\n: ";
                    std::cout << "\t\t\t\t\tName : " << name[i] << "       Phone : " << no[i];
                    check2++;
                }
            }
            if (check2 == 0)
            {
                std::cout << "\t\t\t\t\tThis name is not Found in your contact list\n";
            }
        }
        // update
        else if (check == 5)
        {
            std::string temp, temp2, temp3;
            std::cout << "\t\t\t\t\tName : ";
            std::cin >> temp;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (temp == name[i])
                {
                    std::cout << "\t\t\t\t\tNew Name : ";
                    std::cin >> temp2;
                    std::cout << "\t\t\t\t\tNew number : ";
                    std::cin >> temp3;
                    name[i] = temp2;
                    no[i] = temp3;
                    std::cout << "\t\t\t\t\tUpdated successfully \n";
                    check2++;
                }
            }
            if (check2 == 0)
            {
                std::cout << "\t\t\t\t\tThis name is not Found in your contact list\n";
            }
        }
        // delete
        else if (check == 6)
        {
            std::string temp;
            std::cout << "\t\t\t\t\tFor Delete Enter name : ";
            std::cin >> temp;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (temp == name[i])
                {
                    std::cout << "\t\t\t\t\tDeleted successfully\n: ";
                    std::cout << "\t\t\t\t\tName : " << name[i] << "       Phone : " << no[i];
                    name[i] = "\0";
                    no[i] = "\0";
                    check2++;
                    totalContacts--;
                }
            }
            if (check2 == 0)
            {
                std::cout << "\t\t\t\t\tThis name is not Found in your contact list\n";
            }
        }
        // delete all
        else if (check == 7)
        {
            std::cout << "\t\t\t\t\tAll Deleted successfully\n: ";
            for (int i = 0; i < k; i++)
            {
                name[i] = "\0";
                no[i] = "\0";
            }
            k = 0;
            totalContacts = 0;
        }
        // Display no. of contact
        else if (check == 8)
        {
            std::cout << "\t\t\t\t\t\t\tTotal numbers of contact list is : " << totalContacts;
        }
        check = menu();
    } while (check != 9);
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
    std::cout << "Enter Your Choice: ";
    std::cin >> a;
    system("cls");
    return a;
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