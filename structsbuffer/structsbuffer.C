#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


struct sensorReading {
    float temperature;
    float humidity;
    int index;
};
int main(void)
{
    srand((unsigned)time(NULL));
    
    int starttemp = 20;
    int starthumid = 40;
    int startindex = 0;
    float avgtemp;
    float avghumid;
    struct sensorReading buffer[5] = {0};
    buffer[0].index = startindex;
    while (1)
    {
        for (int i = 4; i > 0; i--)
        {
            buffer[i].temperature = buffer[i - 1].temperature;
            buffer[i].humidity = buffer[i - 1].humidity;
            buffer[i].index = buffer[i - 1].index;
        }
        buffer[0].temperature = starttemp + (rand() % 10);
        buffer[0].humidity = starthumid + (rand() % 10);
        buffer[0].index = startindex++;
        avgtemp = 0;
        avghumid = 0;
        for (int i = 0; i < 5; i++)
        {
            avgtemp += buffer[i].temperature;
            avghumid += buffer[i].humidity;
        }
        avgtemp /= 5;
        avghumid /= 5;
        sleep(1);
        system("clear");
        printf("Temperature: %.2f, Humidity: %.2f\n", avgtemp, avghumid);
        printf("last reading index: %d\n", buffer[0].index);
        
    }
    return 0;
}
