#include <stdio.h>
#include <string.h>

int main()
{
    int horizontal = 0;
    int vertical = 0;
    int aim = 0;
    char forward[] = "forward";
    char down[] = "down";
    
    struct Instructions {
        char direction[50];
        int distance;
    };

    struct Instructions array[] = {
        //data here
    };
    /*part 1
    for (int i = 0; i < 1000; i++){
        if (strcmp(array[i].direction,forward) == 0){
            horizontal += array[i].distance;
        }
        else if (strcmp(array[i].direction,down) == 0){
            vertical += array[i].distance;
        }
        else{
            vertical -= array[i].distance;
        }
    } */

    //part 2
    for (int i = 0; i < 1000; i++){
        if (strcmp(array[i].direction,forward) == 0){
            horizontal += array[i].distance;
            vertical += aim * array[i].distance;
        }
        else if (strcmp(array[i].direction,down) == 0){
            aim += array[i].distance;
        }
        else{
            aim -= array[i].distance;
        }
    }
    //printf("%d, %d",horizontal,vertical);
    printf("%d",horizontal * vertical);
    return 0;
}