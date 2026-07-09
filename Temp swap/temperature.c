
#include <stdio.h>

int main() {
	float tempC;
	float tempF;
	float tempK;
    int choice;
	printf("Choose in what type you want to enter the temperature:\n");
	printf("1. Celsius\n");
	printf("2. Fahrenheit\n");
	printf("3. Kelvin\n");
	scanf("%d", &choice);
	printf("Enter the temperature: ");
	switch (choice) {
		case 1:
			scanf("%f", &tempC);
			tempF = (tempC * 9 / 5) + 32;
			tempK = tempC + 273.15;
			printf("Temperature in Fahrenheit: %.2f\n", tempF);
			printf("Temperature in Kelvin: %.2f\n", tempK);
			break;
		case 2:
			scanf("%f", &tempF);
			tempC = (tempF - 32) * 5 / 9;
			tempK = tempC + 273.15;
			printf("Temperature in Celsius: %.2f\n", tempC);
			printf("Temperature in Kelvin: %.2f\n", tempK);
			break;
		case 3:
			scanf("%f", &tempK);
			tempC = tempK - 273.15;
			tempF = (tempC * 9 / 5) + 32;
			printf("Temperature in Celsius: %.2f\n", tempC);
			printf("Temperature in Fahrenheit: %.2f\n", tempF);
			break;
		default:
			printf("Invalid choice.\n");
	}
	return 0;
}
