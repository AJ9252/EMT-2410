#include <iostream>

using namespace std;

int main(){

    int i;
    int max;
    int min;
    int temp=0;

    float MyNum[5];

    cout << "Input 5 float numbers:"<< endl;
        for (i=0; i<5; i++){
            cin >>MyNum[i];
        }
max = MyNum[0];
min = MyNum[0];

for (i=1; i<5; i++){
    if (MyNum[i] > max){
        max = MyNum[i];
        }
    else if (MyNum[i] < min){
        min = MyNum[i];
        }
}

cout << "Type 1 for maximum number, or 2 for lowest number: " << endl;
cin >> temp;
switch(temp){
    case 1: cout << "The Maximum number is: " << max << endl;
    break;

    case 2: cout << "The minimum number is: " << min << endl;
    break;

    default: cout << "Incorrect or unknown input" << endl;
    break;
}
        
return 0;
}
