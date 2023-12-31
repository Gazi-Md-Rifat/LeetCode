class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temperature;
        cout << fixed;
        cout << setprecision(5);
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32;
        temperature.push_back(kelvin);
        temperature.push_back(fahrenheit);
        return temperature;
    }
};