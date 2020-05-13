#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat?";
    cin>>wiek;

    if(wiek<18)
    {
        cout<<"nie jestes pelnoletni i nie mozesz zostac prezydentem";
    }
    else if((wiek>=18) && (wiek<35))
    {
        cout<<"jestes pelnoletni, ale nie mozesz kandydowac na prezydenta";
    }
       if ((wiek>=35)&& (wiek<115))
    {
        cout<<"jestes pelnoletni i mozesz kandydowac na prezydenta";
    }
        if(wiek>=115)
    {
        cout<<"nie zyjesz";
    }

    return 0;
}
