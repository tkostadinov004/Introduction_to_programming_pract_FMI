#include <iostream>
#include <cmath>
int main()
{
    float cheeseburger = 8.25f;
    short fishMenu = 12;
    float chickenWings = 10.99f;
   
    //since the amount has no set boundaries int and double are prefered:
    int cheeseburgerAmount, fishMenuAmount, chickenWingsAmount;
    
    std::cout << "Enter the amount of wanted products: ";
    std::cin >> cheeseburgerAmount >> fishMenuAmount >> chickenWingsAmount;

    double currentPrice = cheeseburger * cheeseburgerAmount + fishMenu * fishMenuAmount 
        + chickenWings * chickenWingsAmount; 

    /*на 08.10 УП,FMI 405,Манахов Д,Сем 4 си поговорихме малко за 
    операторите |, &, ^, <<, >> и затова реших да го пробвам 
    (не казвам, че сме ги взели подробно, аз се поинтересувах повече и си потърсих).
    исках максимално да ползвам горе- долу познати неща, a и за друго не се сетих :)
    
    Какво се случва: търсим дали сумата е над или равна на 60; 
    !!ако от 60 извадим сумата и получим положително число или 0 (тоест сумата ни е <= 60)
    60 - (int)currentPrice ще върне неотрицателно;
    
    ВАЖНО УТОЧНЕНИЕ, правя (INT)currentPrice, защото дори да е от сорта на 60.01 ще стане 60
    и дори да е 59.999 ще стане 59 и няма да влияе на решението

    !!ако от 60 извадим сумата и получим отрицателно число (сумата > 60) 
    60 - (int)currentPrice ще върне отрицателно;

    Защо като цяло ползвах да се получи неотр. или отр. число:
    
    едно число в 32-битов двоичен код е представено така : 45 --> 00000000 00000000 00000000 00101101
    обаче ако имаме например -45 става --> 11111111 11111111 11111111 11010011

    Защо използвам  >> 31:
    операторът се казва right Shift Operator 

    Какво прави? - измества с колкото бита сме задали (31) надясно
    тоест това, което ще остане: 
    1.    45>>31 --> 00000000 00000000 00000000 00000000 (което всъщност е 0 :) )
    2.    -45>>31 --> 11111111 11111111 11111111 11111111 (което всъщност е -1 :) )

    ако получим 1. значи изобщо не ни се налага да изчисляваме десерта, затова умножаваме по 0
    ако получим 2. значи ще умножим -1 * dessert, за да правилно прибавим сумата на десерта

    със сигурност има по-просто решение, но кой да се сети
   */
    int dessert = (60 - (int)currentPrice) >> 31; // if sum > 60 = -1 if sum < 60 = 0
    double fullPrice = currentPrice + 5 + (-1 * dessert * currentPrice * 1 / 10);
    //round number 
    std::cout << round(fullPrice * 100) / 100;
  
    
}

