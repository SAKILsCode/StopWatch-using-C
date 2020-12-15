#include <stdio.h>
// #include <stdlib.h>

#define CYCLE 60

// If it is windows then do that
#ifdef _WIN32
#include <Windows.h>
// Defined Sleep(x*1000) function as sleep(*), so that the programme can work any environment either windows or mac.
#define sleep(x) Sleep(x*1000)

// Else do that
#else
#define system("clear") printf("\e[1;1H\e[2j")
// Ref: https://stackoverflow.com/questions/30562823/clean-the-screen-in-c
#include <unistd.h>
#endif



int main(){
    int hour, min, sec;
    printf("Enter Hour Minute and Second_ ");
    scanf("%d%d%d", &hour, &min, &sec);
    system("clear");


    int h = 0, m = 0, s = 0;
    while(1){
        printf("\n\n============= STOP WATCH =============\n\n\n");
        printf("              %d : %d : %d\n", h, m, s);
        printf("\n\n======================================\n\n\n");

        if (h == hour && m == min && s == sec)
        {
            break;
        }

        s++;
        sleep(1);
        system("clear");


        if (s == CYCLE)
        {
            m++;
            s = 0;
        }
        if (m == CYCLE)
        {
            h++;
            m = 0;
        }
        
        
    }



    return 0;
}