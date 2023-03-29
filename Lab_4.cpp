#include <iostream>
using namespace std;


int* input(int temp){
    static int a[5]; 

        for(int i = 0; i<temp; i++)
    {
        a[i]=i;
        cout << "Input number " << i + 1 << ":  ";
        cin >> a[i];}
        cout << endl;
    return a;
}

//=========================================================================
int average(int a[], int n) 
{
    int total, i, max, sum=0, invalid=9999999;
    for (int i=0; i<n; i++){
    sum += a[i];
    total = sum/n;
    if (a[i]==invalid){
        return invalid;}
        }

return total;
}

//=========================================================================
int list(int a[], int n, int maxnum)
{
    int i;
    for (int i=0; i<n; i++){
        cout<<"Number "<< i+1 <<":   "<< a[i] << endl;
    }


}
//=========================================================================
int main()
{
    int number, max , output, invalid2=9999999;
    int* request; 

    cout << "Input how many numbers to use: ";
    cin >> number;
    request = input(number); 

    max = average(request, number);

    if (max==invalid2)
        cout<<"Error Number cannot be "<< max;
        else 
            {
            output = list(request, number, max);
            cout<<"Average: "<< max;
            }



return 0;
} 