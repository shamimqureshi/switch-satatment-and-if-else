#include<iostream>
using namespace std;
int main()

{
    int day;
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"Monday"<<endl;
        break;

         case 2:
        cout<<"Tue"<<endl;
        break;

         case 3:
        cout<<"Wed"<<endl;
        break;

         case 4:
        cout<<"Thus"<<endl;
        break;

         case 5:
        cout<<"Fri"<<endl;
        break;

         case 6:
        cout<<"Sat"<<endl;
        break;


         case 7:
        cout<<"sunday"<<endl;
        break;

        default:
        cout<<"default case"<<endl;
    }
}