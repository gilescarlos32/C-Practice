#include <iostream>
using namespace std;

class Humidity;

class Temperature
{
private:
    int m_temp;
public:
    Temperature(int temp = 0) { m_temp = temp; }

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

class Humidity
{
private:
    int m_humidity;
public:
    Humidity(int humidity = 0) { m_humidity = humidity; }

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

//Can access member variables of both classes but NOT a member function of either class!
void printWeather(const Temperature &temperature, const Humidity &humidity)
{
    cout << "The temperature is " << temperature.m_temp <<
         " and the humidity is " << humidity.m_humidity << '\n';
}

int main() {
    Humidity hum(10);
    Temperature temp(12);

    printWeather(temp, hum);

    return 0;
}