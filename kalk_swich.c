#include <stdio.h>
void czolowka(){
	printf("\n  \n");
	printf("  ************************************************************\n");
	printf("  *|                                                        |*\n"); 
	printf("  *|              PROGRAM Kalkulator    INFORMATYKA         |*\n");
	printf("  *|                        switch                          |*\n");
	printf("  *|                      WSPol 2017/2018                   |*\n");
	printf("  ************************************************************\n");
	printf("\n");
}
double mnoz(double a, double b) {
    printf("Wynik mnozenia: %lf\n", a * b);
    return 0;
}

double dziel(double a, double b) {
    printf("Wynik dzielenia: %lf\n", a / b);
    return 0;
}

double dodaj(double a, double b) {
    printf("Wynik dodawania: %lf\n", a + b);
    return 0;
}

double odejmowanie(double a, double b) {
    printf("Wynik odejmowania: %lf\n", a - b);
    return 0;
}

double licz(double a, double b, char wybor) {


    //Wybor z switch
    switch (wybor) {
        case '+':
            dodaj(a, b);
            break;
        case '-':
            odejmowanie(a, b);
            break;
        case '*':
            mnoz(a, b);
            break;
        case '/':
            dziel(a, b);
            break;

        default:
            printf("Bledny wybor\n");
            break;

    }

    return 0;


}

int main() {

    double a, b;
    system("cls");
	 czolowka();
    char wybor;
    int czy_dalej = 1;

    while (czy_dalej == 1) {


        printf("Podaj pierwsza liczbe\n");
        scanf("%lf", &a);    

        printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
        scanf(" %c", &wybor);   

        printf("Podaj druga liczbe\n");
        scanf("%lf", &b);   

        licz(a, b, wybor);


        printf("Czy liczyc dalej? (1 - tak / 0 - nie: ");
        scanf("%i", &czy_dalej);
    }

    return 0;
}
