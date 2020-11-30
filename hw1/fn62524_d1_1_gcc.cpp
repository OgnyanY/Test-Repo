#include <iostream>

using namespace std;

int main()
{
/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Ognyan Yonchev
* @idnumber 62524
* @task 1
* @compiler GCC
*
*/

    int birthDay = 0, laptopPrize = 0, toyPrize = 0, result = 0;
    int evenBirthday = 1;

    const int MONEY_FOR_EVEN_BIRTHDAY = 30;

    do{
        cin >> birthDay;

    }while(birthDay <= 0);

    do{
        cin >> laptopPrize;

    }while(laptopPrize <= 0);

    do{
        cin >> toyPrize;

    }while(toyPrize <= 0);


// Here I check if the birthday is even or not.
    for(int i = 1; i <= birthDay; i++){

        if(i % 2 != 0){
                result = result + toyPrize;
        }
        else{
            result = result + ((evenBirthday * MONEY_FOR_EVEN_BIRTHDAY) - 5);
            evenBirthday ++;
        }
    }

// Here I check if he have enough money to buy laptop.
    if(result >= laptopPrize){
        cout << "yes" << endl;
        result = result - laptopPrize;
        cout << result << endl;
    }
    else if(result < laptopPrize){
        cout << "no" << endl;
        result = laptopPrize - result;
        cout << result << endl;
    }
    return 0;
}
