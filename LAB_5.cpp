
#include <iostream>
using namespace std; 

class LED {
private:

    int PinNum;
    int TimeDuration = 10;
    float Brightness = 100;


public:
    LED (int pinnum){ 
        PinNum=pinnum; 
    }
    void turnon(){ 
        cout <<"LED Pin: "<< PinNum <<endl;
        cout <<"Brightness (%): "<< Brightness << endl;
        cout <<"Duration (s): "<< TimeDuration << endl;  
    }

    void turnon(float brightness){ 

    Brightness=brightness;
    cout <<"LED-On is connected to pin: "<< PinNum << endl;
        //==============================================================
        if (Brightness > 0 && Brightness <= 100){
            cout <<"Brightness Level (%): "<< Brightness << endl;
            cout <<"Duration (s): "<< TimeDuration << endl;
        }
            else if (Brightness == 0){
            cout <<"LED OFF" << endl;
            }
                else{ 
                    Brightness=100;
                    cout <<"Brightness Level (%): "<< Brightness << endl;
                    cout <<"Duration (s): "<< TimeDuration << endl;
                    }
                    //==============================================================
    }
    void turnon(float brightness, int timeduration) 
    {
    Brightness=brightness;
    TimeDuration=timeduration;
        cout <<"LED Pin: "<< PinNum <<endl;

        //==============================================================
        if (Brightness>0 && Brightness<=100){
            cout <<"Brightness Level (%): "<< Brightness << endl;
            cout <<"Duration (s): "<< TimeDuration << endl;
        } 
        //==============================================================
        else if (Brightness==0){
            cout <<"LED is off" << endl;
        }
        //==============================================================
        else{
            Brightness=100;
            cout <<"Brightness Level (%): "<< Brightness << endl;
            cout <<"Duration (s): "<< TimeDuration << endl;
        }
    }
};

//===================================================================


int main()
{
    int brightness, duration;
    string prompt;
    LED GreenLED(5); 

    cout <<"Enter 'DEFAULT' to use standard settings" << endl;
    cout << "Press key for custom setting: " << endl;
    cin >> prompt;
    cout << endl;
    //===================================================================
    if (prompt == "DEFAULT"){ 
        GreenLED.turnon();
    }

    else{ 
        cout << "Brightness: ";
        cin >> brightness;

        cout << "Enter duration amount or 0 to use default: ";
        cin >> duration;
        cout << endl;
        //===================================================================
        if (duration==0){ 
            GreenLED.turnon(brightness); 
        }
        else{ 
            GreenLED.turnon(brightness, duration); 
        }
    }
    return 0;
}