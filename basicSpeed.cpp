#include <iostream>

//following is the code to compute speed with a simple formula
int main(){
    double distance;
    double time;
    double speed;

    std::cout << "Enter distance in m\n";
    std::cin >> distance;
    //if distance = 4m

    std::cout << "Enter time in s\n";
    std::cin >> time;
    //time entered = 2s

    speed = distance / time;

    std::cout << "Your speed is: " << speed << "m/s\n";
    //program should return speed = 2m/s
    
    return 0;
}
