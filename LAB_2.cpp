#include <iostream>

using namespace std;

int main(){

    int i;
    int max;
    int min;

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
cout << "The Maximum number is: " << max << endl;
cout << "The minimum number is: " << min << endl;
        
return 0;
}