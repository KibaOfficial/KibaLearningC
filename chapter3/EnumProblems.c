#include <stdio.h>

enum Drinks {
    Drinks_NO_DRINK,
    Drinks_COLA,
    Drinks_FANTA,
    Drinks_SPRITE,
    Drinks_COFFEE, // int COFFEE = 4
    Drinks_WATER
};

enum CaffeineDrinks {
    Caffeine_Drinks_COFFEE, // int COFFEE = 0
    Caffeine_Drinks_ENERGY
};

int main(void)
{
    enum Drinks selected_drinks = Drinks_NO_DRINK;

    printf("Select a drink:\nCola (1)\nFanta (2)\nSprite (3)\nCoffee (4)\nWater (5)\nNumber: ");
    scanf("%d", &selected_drinks);

    switch (selected_drinks)
    {
    case Drinks_COLA:
    {
        printf("You selected Cola\n");
        break;
    }
    case Drinks_FANTA:
    {
        printf("You selected Fanta\n");
        break;
    }
    case Drinks_SPRITE:
    {
        printf("You selected Sprite\n");
        break;
    }
    case Drinks_COFFEE:
    {
        printf("You selected Coffee\n");
        break;
    }
    case Drinks_WATER:
    {
        printf("You selected Water\n");
        break;
    }
    default:
    {
        printf("You selected no drink");
        break;
    }
    }

    return 0;
}
