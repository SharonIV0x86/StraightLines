#include <iostream>
#include <string>
#include <cmath>
#include "suppliments.h"
void Do_All_Calculations(char);
void inline helper();
void inline helper2();
std::string choice;
char univ_calc_setter;
class main_class : public suppliments
{
private:
    int one_for_all_int, x_axis_array[100], y_axis_array[100];
    std::string one_for_all[100];
    float slope, distance_final, area_of_triangle;

public:
    friend void Do_All_Calculations(char);
    void makin_choices()
    {
        std::cout << "\n\n\tPress 1 to find distance between two points: ";
        std::cout << "\n\n\tPress 2 to find the slope of two points: ";
        std::cout << "\n\n\tPress 3 to find Slope and Distance of/between 2 points: ";
        std::cout << "\n\n\tPress 4 to find area of the triangle on cartesian plane: ";
        std::cout << "\n\n\tPress 5 to exit the program :) and get to know something cool!";
        std::cout << "\n\n\n";
        std::cout << "\n\n\t-----> ";
        std::getline(std::cin, one_for_all[2]);
        check_for_empty_lines(one_for_all[2], 'M');
        one_for_all_int = std::stoi(one_for_all[2]);
        switch (one_for_all_int)
        {
        case 1:
            univ_calc_setter = 'D';
            Do_All_Calculations('D');
            break;
        case 2:
            univ_calc_setter = 'S';
            Do_All_Calculations('S');
        case 3:
            univ_calc_setter = 'r';
            Do_All_Calculations('r');
        case 4:
            univ_calc_setter = 'T';
            Do_All_Calculations('T');
        case 5:
        clear_screen();
        std::cout <<"\n\n\tThis program is made by SharonIV0x86 "
                  <<"\n\n\tGitHub.com/SharonIV0x86 "
                  <<"\n\n\tIf you are reading this you are one of the best person alive in existence! "
                  <<"\n\n\tThanks for using this program! ";
                  exit(EXIT_SUCCESS);
        default:
            std::cout << "\n\n\tInvalid Choice! EXITTING PROGRAM ";
            std::cout << "\n\n\tThanks for using the program" << std::endl;
            exit(EXIT_FAILURE);
            break;
        }
    }
};
main_class universal_object; // <-- a universal object to do all the work

void Do_All_Calculations(char secret = univ_calc_setter)
{
    std::cout << "\t---------Enter the coordinates one by one----------" << std::endl;

    std::cout << "\n\n\tEnter the (x1) coordinate of the first point: ";
    std::getline(std::cin, universal_object.one_for_all[1]);
    universal_object.check_for_empty_lines(universal_object.one_for_all[1], 'A');

    std::cout << "\n\n\tEnter the (y1) coordinate of first point: ";
    std::getline(std::cin, universal_object.one_for_all[2]);
    universal_object.check_for_empty_lines(universal_object.one_for_all[2], 'A');

    std::cout << "\n\n\tEnter the (x2) coordinate of second point: ";
    std::getline(std::cin, universal_object.one_for_all[3]);
    universal_object.check_for_empty_lines(universal_object.one_for_all[3], 'A');

    std::cout << "\n\n\tEnter the (y2) coordinate of second point: ";
    std::getline(std::cin, universal_object.one_for_all[4]);
    universal_object.check_for_empty_lines(universal_object.one_for_all[4], 'A');

    if (secret == 'T')
    {
        std::cout << "\n\n\tEnter the (x3) cordinate of third point: ";
        std::getline(std::cin, universal_object.one_for_all[5]);
        universal_object.check_for_empty_lines(universal_object.one_for_all[5], 'A');

        std::cout << "\n\n\tEnter the (y3) cordinate of the third point: ";
        std::getline(std::cin, universal_object.one_for_all[6]);
        universal_object.check_for_empty_lines(universal_object.one_for_all[6], 'A');

        universal_object.x_axis_array[3] = std::stoi(universal_object.one_for_all[5]); // converting x3 to int
        universal_object.y_axis_array[3] = std::stoi(universal_object.one_for_all[6]); // converting y3 to int
    }

    universal_object.x_axis_array[1] = std::stoi(universal_object.one_for_all[1]); // converting x1 point to int
    universal_object.y_axis_array[1] = std::stoi(universal_object.one_for_all[2]); // converting y1 ppoint to int
    universal_object.x_axis_array[2] = std::stoi(universal_object.one_for_all[3]); // converting x2 point to int
    universal_object.y_axis_array[2] = std::stoi(universal_object.one_for_all[4]); // converting y2 point to int
    universal_object.clear_screen();
    std::cout << "\n\n\tPress any key to confirm the coordinates of the points: ";
right_here:
    std::cout << "\n\n\tPoint A (" << universal_object.x_axis_array[1] << " , " << universal_object.y_axis_array[1] << " )";
    std::cout << "\n\n\tPoint B (" << universal_object.x_axis_array[2] << " , " << universal_object.y_axis_array[2] << " )";
    if (secret == 'T')
    {
        std::cout << "\n\n\tPoint C (" << universal_object.x_axis_array[3] << " , " << universal_object.y_axis_array[3] << " )";
    }

    std::cin.get();
    // here comes the if else and calculate
    if (secret == 'D')
    {
        universal_object.distance_final = sqrt(pow(universal_object.x_axis_array[2] - universal_object.x_axis_array[1], 2) + pow(universal_object.y_axis_array[2] - universal_object.y_axis_array[1], 2));
        std::cout << "\n\n\tThe distance between the given points is: " << universal_object.distance_final << " sq units" << std::endl;
        std::cout << "\n\n\tPress any key to move back to main hub. ";
        std::cin.get();
        universal_object.clear_screen();
        universal_object.makin_choices();
    }
    else if (secret == 'S')
    {
        universal_object.slope = (universal_object.y_axis_array[2] - universal_object.y_axis_array[1]) / (universal_object.x_axis_array[2] - universal_object.x_axis_array[1]);
        std::cout << "\n\n\tThe slope between given points is: " << universal_object.slope << " sq units" << std::endl;
        std::cout << "\n\n\tPress any key to move back to main hub. ";
        std::cin.get();
        universal_object.clear_screen();
        universal_object.makin_choices();
    }
    //(1/2) [x1 (y2 – y3 ) + x2 (y3 – y1 ) + x3(y1 – y2)]
    else if (secret == 'T')
    {
        std::cout << "\n\n\ttherefore applying---> (1/2) [x1 (y2 - y3 ) + x2 (y3 - y1 ) + x3(y1 - y2)] ";
        universal_object.area_of_triangle = 0.5 * (universal_object.x_axis_array[1] * (universal_object.y_axis_array[2] - universal_object.y_axis_array[3]) + universal_object.x_axis_array[2] * (universal_object.y_axis_array[3] - universal_object.y_axis_array[1]) + universal_object.x_axis_array[3] * (universal_object.y_axis_array[1] - universal_object.y_axis_array[2]));
        std::cout << "\n\n\tThe Area of Traingle with given points is: " << universal_object.area_of_triangle << " sq units";
        std::cout << "\n\n\tPress any key to move back to main hub: ";
        universal_object.makin_choices();
    }

    universal_object.distance_final = sqrt(pow(universal_object.x_axis_array[2] - universal_object.x_axis_array[1], 2) + pow(universal_object.y_axis_array[2] - universal_object.y_axis_array[1], 2));
    std::cout << "\n\n\tThe distance between the given points is: " << universal_object.distance_final << " sq. units" << std::endl;

    universal_object.slope = (universal_object.y_axis_array[2] - universal_object.y_axis_array[1]) / (universal_object.x_axis_array[2] - universal_object.x_axis_array[1]);
    std::cout << "\n\n\tThe slope between given points is: " << universal_object.slope << " sq. units" << std::endl;
    exit(EXIT_SUCCESS);
}

int main()
{
    universal_object.makin_choices();
    return 0;
}
void inline helper()
{
    Do_All_Calculations(univ_calc_setter);
}
// the helping functions that i am using to call class functions from the suppliments.h file
void inline helper2()
{
    universal_object.makin_choices();
}
