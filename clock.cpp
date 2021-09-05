#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
int main()
{
    int hr = 18, min = 42, sec = 13;
    while (true)
    {
        system("cls");
        cout << hr << " : " << min << " : " << sec;
        sec++;

        if (sec == 60)
        {
            min++;
            sec = 0;
            if (min == 60)
            {
                hr++;
                min = 0;
                if (hr == 24)
                {
                    hr = 0;
                }
            }
        }
        sleep(1);
    }
    return 0;
}