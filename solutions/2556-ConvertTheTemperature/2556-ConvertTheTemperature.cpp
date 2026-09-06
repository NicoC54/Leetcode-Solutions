// Last updated: 06/09/2026 15:00:51
class Solution {
public:
    vector<double> convertTemperature(double celsius) {

    double kelvin = celsius + 273.15;
    double Fahrenheit = celsius*1.80 +32;

    return {kelvin,Fahrenheit};
        
    }
};