#include <stdio.h>

// Function to convert length units
void convertLength() {
    int choice;
    float value;

    printf("\n\tLength Conversion :- \n");
    printf(" 1. Meters to Kilometers\n");
    printf(" 2. Kilometers to Meters\n");
    printf(" 3. Meters to Centimeters\n");
    printf(" 4. Centimeters to Meters\n");
    printf(" sEnter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter value to convert: ");
    scanf("%f", &value);

    switch(choice) {
        case 1:
            printf("%.2f meters = %.2f kilometers\n", value, value / 1000);
            break;
        case 2:
            printf("%.2f kilometers = %.2f meters\n", value, value * 1000);
            break;
        case 3:
            printf("%.2f meters = %.2f centimeters\n", value, value * 100);
            break;
        case 4:
            printf("%.2f centimeters = %.2f meters\n", value, value / 100);
            break;
        default:
            printf("Invalid choice\n");
    }
}

// Function to convert weight units
void convertWeight() {
    int choice;
    float value;

    printf("\n\tWeight Conversion :- \n");
    printf(" 1. Kilograms to Grams\n");
    printf(" 2. Grams to Kilograms\n");
    printf(" 3. Pounds to Kilograms\n");
    printf(" 4. Kilograms to Pounds\n");
    printf(" Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter value to convert: ");
    scanf("%f", &value);

    switch(choice) {
        case 1:
            printf("%.2f kilograms = %.2f grams\n", value, value * 1000);
            break;
        case 2:
            printf("%.2f grams = %.2f kilograms\n", value, value / 1000);
            break;
        case 3:
            printf("%.2f pounds = %.2f kilograms\n", value, value * 0.453592);
            break;
        case 4:
            printf("%.2f kilograms = %.2f pounds\n", value, value / 0.453592);
            break;
        default:
            printf("Invalid choice\n");
    }
}

// Function to convert temperature units
void convertTemperature() {
    int choice;
    float value;

    printf("\n\tTemperature Conversion :- \n");
    printf(" 1. Celsius to Fahrenheit\n");
    printf(" 2. Fahrenheit to Celsius\n");
    printf(" 3. Celsius to Kelvin\n");
    printf(" 4. Kelvin to Celsius\n");
    printf(" Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter value to convert: ");
    scanf("%f", &value);

    switch(choice) {
        case 1:
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, (value * 9/5) + 32);
            break;
        case 2:
            printf("%.2f Fahrenheit = %.2f Celsius\n", value, (value - 32) * 5/9);
            break;
        case 3:
            printf("%.2f Celsius = %.2f Kelvin\n", value, value + 273.15);
            break;
        case 4:
            printf("%.2f Kelvin = %.2f Celsius\n", value, value - 273.15);
            break;
        default:
            printf("Invalid choice\n");
    }
}
//Function to convert Currency
void convertcurrency() {
    int choice;
    float value;
    printf("\n\t Currency Conversion:-\n");
    printf("1. EUR (Euro)\n");
    printf("2. GBP (British Pound)\n");
    printf("3. INR (Indian Rupee)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter value in USD to convert: ");
    scanf("%f", &value);

    switch(choice) {
        case 1:
            printf("%.2f USD = %.2f EUR\n", value, (value * 0.91) );
            break;
        case 2:
            printf("%.2f USD = %.2f GBP\n", value, (value * 0.81) );
            break;
        case 3:
            printf("%.2f USD = %.2f INR\n", value, (value * 83.25) );
            break;
        default:
            printf("Invalid choice.\n");
    }

}
// Main function to interact with user
int main() {
    int choice;

    while (1) {
        printf("\n\n\t\t***Unit Converter***\n\n");
        printf("1. Length Conversion\n");
        printf("2. Weight Conversion\n");
        printf("3. Temperature Conversion\n");
        printf("4. Currency Conversion\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                convertcurrency();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
