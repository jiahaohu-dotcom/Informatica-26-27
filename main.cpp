#include <iostream>

int main()
{
    int level = 0;
    std::cout << "Inserisci il livello di FizzBuzz";
    while(level < 1){
        std::cin >> level ;
        if (level<=1)
            std::cout << "ERRORE: Inserisci un valore > 1! \n";
    }
    std::cout <<"Grazie. Calcolo FizzBuzz fino al numero"
            << level << "\n";
    
    for(int i= 1 <= level; i++){
        if(i%3 == 0 and i%5 == 0)}
            std::cout << i << "FizzBuzz \n";
            
    
}