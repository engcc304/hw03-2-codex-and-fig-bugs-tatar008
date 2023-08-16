//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    float a, b = 3;
    int _1 = 0;       

    printf("%d ", _1);

    int i = 0;

    if (_1 != 0) {
        printf("ok ");
    } else {
        while (i <= 5) {
            printf("not-okey-%d ", ++i);  
        }// end while

        for (i = 3; i < 10; i += 1) {
            if (i % 2 == (_1 ? 1 : 0)) {  
                printf("see see");
            } else {
                printf("haha");
            }//end else
        }//end for
    }//end else

    return 0;
}//end maian
