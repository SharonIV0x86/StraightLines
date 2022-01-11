#include <iostream>
void conversion_to_int();
void inline helper();
void inline helper2();
class suppliments
{
public:
    void inline clear_screen()
    {
#ifdef _WIN32
        {
            std::system("cls");
        }
#else
        {
            std::system("clear");
        }
#endif
    }
    void inline check_for_empty_lines(std::string field, char secret)
    {

        if (field.empty())
        {
            clear_screen();
            std::cout << "\n\n\tThe following field cannot be empty ";
            std::cout<<"\n\n\tSorry :( Kindly Enter the input precisely! ";
            std::cin.ignore();
            if (secret == 'A')
            {
                helper();
            }
            else if (secret == 'M')
            {
                helper2();
            }
        }
    }
    
};
