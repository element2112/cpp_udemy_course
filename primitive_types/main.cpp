#include <iostream>

using namespace std;

int main()
{
    //************************** char type **********************/
    char middle_initial {'L'};
    
    cout << "My middle initial is " << middle_initial << "\n";
    
    // ************************** integer types ***************/
    unsigned short int exam_score {95};
    
    cout << "My exam score was " << exam_score << endl;
    
    int countries {65};
    
    cout << "There are about " << countries << " countries represented" << endl;
    
    long people_in_florida {20610000}; // list initialization catches overflow issues at compile time by issuing a warning
    
    cout << "There are about " << people_in_florida << " people in florida" << endl;
    
    long long people_on_earth {7'600'000'000}; // g++ 14 allows tic marks for readability for long numbers
    
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    //***************************** FLOATING POINT TYPES ************************************//
    
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    //*****************************BOOLEAN *************************************************//
    
    bool game_over {false};
    cout << "The value of game over is " << game_over << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}