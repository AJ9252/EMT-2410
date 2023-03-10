#include <iostream>
using namespace std;

//=========================================
int* userinput(int x){//Take in 5 integers and store them in MyNum

static int MyNum[5];

    cout << "Input 5 float numbers:"<< endl;
        for (int i=0; i<x; i++){
            MyNum[i]=i;
            cin >>MyNum[i];
        }    
    return MyNum;
}

//========================================
int findmax(int MyNum[])
{
int i, max;
max = MyNum[0];

for (i=1; i<5; i++)
{
    if (MyNum[i] > max){
        max = MyNum[i];
        cout<<endl;
        }
}
return max;
}

//======================================
int findmin(int MyNum[])
{
int i, min;
min = MyNum[0];

for (i=1; i<5; i++)
{
    if (MyNum[i] < min){
        min = MyNum[i];
        cout<<endl;
        }
}
return min;
}

//========================================
int output(int bignum, int smallnum, int temp){// Take 0 or 9 input, display userinput() output
switch(temp){
    case 9: cout << "The Maximum number is: " << bignum << endl;
    break;

    case 0: cout << "The minimum number is: " << smallnum << endl;
    break;

    default: cout << "Incorrect or unknown input" << endl;
    break;
}
}

//==========================================
int main(){// display output
int request;
int maxnum, minnum, bignum, user, function2;
int *firstfunction;

firstfunction=userinput(5);
maxnum = findmax(firstfunction);
minnum = findmin(firstfunction);
cout << "Type 9 for maximum number, or 0 for lowest number: " << endl;
cin >> function2;
user = output(maxnum, minnum, function2);
cout << user;
}