#include <iostream>
using namespace std;

// conversion of kph to mph
double conversionToMph(double speedInKph)
{
    double speedInMph;
    if (speedInKph < 0)
    {
        cout << "Negative number is not allowed" << endl;
        return 0.0;
    }
    else if (speedInKph >= 300)
    {
        cout << "More than 300 Kmph is not allowed" << endl;
        return 300.0;
    }
    else
    {
        speedInMph = speedInKph * 0.621371;
        return speedInMph;
    }
}

// conversion of mph to kph
double conversionToKph(double speedInMph)
{
    double speedInKph;
    if (speedInMph < 0)
    {
        cout << "Negative number is not allowed" << endl;
        return 0.0;
    }
    else if (speedInMph >= 186)
    {
        cout << "More than 186 Mph speed is not allowed" << endl;
        return 186.0;
    }
    else
    {
        speedInKph = speedInMph / 0.621371;
        return speedInKph;
    }
}

int main()
{
    int option;
    double speedInMPH, speedInKPH;
    double resultInKPH = 0.0, resultInMPH = 0.0; // Declare the variables outside the switch

    cout << "Enter\n 1 for conversion to KPH \n 2 for conversion to MPH:" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Enter speed in MPH:" << endl;
        cin >> speedInMPH;
        resultInKPH = conversionToKph(speedInMPH);
        if (resultInKPH >= 186)
        {
            cout << "Speed in KPH is: " << resultInKPH << " mph" << endl;
            break;
        }
        else
        {
            cout << "Speed in KPH is: " << resultInKPH << " kph" << endl;
            break;
        }

    case 2:
        cout << "Enter speed in KPH:" << endl;
        cin >> speedInKPH;
        resultInMPH = conversionToMph(speedInKPH);
        if (resultInMPH >= 300)
        {
            cout << "Speed in KPH is: " << resultInKMPH << " kph" << endl;
            break;
        }
        else
        {
            cout << "Speed in MPH is: " << resultInMPH << " mph" << endl;
            break;
        }
    default:
        cout << "Please choose a valid option." << endl;
        break;
    }

    return 0;
}
