#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>



int main()
{

    srand(time(0));
    int moneyRemaining = 1000;
    int randNum = rand() % 100 + 1;
    int bet = 0;
while(1){
    int randNum = rand() % 100 + 1;
    std::cout << moneyRemaining << ": money left" << std::endl;
    std::cout << "bet: ";
    std::cin >> bet;
    if(moneyRemaining <= 0 || bet > moneyRemaining)
    {
        std::cout << "you are broke get out of here";
        break;
    }
    else{
        if(randNum % 2){
            std::cout << "you won!";
            moneyRemaining = moneyRemaining + bet;
        }
        else{
        std::cout << "you lost try again" << std::endl;
        moneyRemaining = moneyRemaining - bet;
        }
    }  
}

    return 0;
}