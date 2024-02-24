#include <iostream>
using namespace std;
int main()
// SWITC STATEMENT

{
    int holiday;
    cin >> holiday;

    switch (holiday)
    {
    case 6:
        cout << "Holiday,Swami Dayananda Saraswati Jayanti" << endl;
        break;
    case 8:
        cout << "Holiday,Maha Shivaratri" << endl;
        break;
    case 22:
        cout << "Holiday,Bihar Day (Bihar Diwas)" << endl;
        break;
    case 23 :
        cout << "Holiday,Bhagat Singh's Martyrdom Day" << endl;
        break;
    case 24:
        cout << "Holiday,Holika Dahan, Doljatra" << endl;
        break;
    case 25:
        cout << "Holiday,Doljatra/Holi" << endl;
        break;
    case 29:
        cout << "Holiday,Good Friday" << endl;
        break;
 case 30:
        cout << "oliday,Easter Sunday" << endl;
        break;

    default:
        cout<<"No Holiday"<<endl;
    }
}