#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your Marks ";
    cin >> n;
    int m = n / 10;
    switch (m)
    {
    case 0:
    case 1:
    case 2:
        cout << "Your Grade is F";
        break;
    case 3:
     cout << "your Grade is E";
     break; 
    case 4:
     cout << "your Grade is D";
     break; 
    case 5:
        cout << "your Grade is C";
        break;
    case 6:
        cout << "your Grade is B";
        break;
    case 7:
        cout << "your Grade is B+";
        break;
    case 8:
        cout << "your Grade is A";
        break;
    case 9:
    case 10:
        cout << "your Grade is A+";
        break;
    default:
     cout<<"Enter valid number";}
        return 0;
    }
