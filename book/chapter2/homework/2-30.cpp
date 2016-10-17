#include <iostream>
using namespace std;

int main()
{
        double kg, cm;
        double bmi;
        string result;

        cout << "pkease type your weight(kg) and height(m):";
        cin >> kg;
        cin >> cm;

        bmi = kg / (cm * cm);

        if ( bmi < 18.5 )
        {
                result = "Underweight";
        }
        else if ( bmi >= 18.5 && bmi < 25 )
        {
                result = "Normal";
        }
        else if ( bmi >= 25 && 29.9 )
        {
                result = "Overweight";
        }
        else
        {
                result = "Obese";
        }

        cout << "BMI:" << bmi << endl;
        cout << "Result:" << result << endl;
}
