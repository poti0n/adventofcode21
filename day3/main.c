#include <stdio.h>

int main(){
    int gamma_rate[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int zero_count = 0;
    int one_count = 0;

    struct Data {
        int datum[24];
    };
    struct Data diagnostic_report[] = {
        //puzzle input
    };
    //iterate through each position
    for (int position=0; position < 12; position++) {
        //iterate through the diagnostic report and count bit occurrences
        for (int i=0; i < 1000; i++){
            if (diagnostic_report[i].datum[position] == 0){
                zero_count ++;
            }
            else{
                one_count ++;
            }
        }
        //set the corresponsing bit in the "gamma rate" to most common bit in that position
        if (zero_count > one_count){
            gamma_rate[position] = 0;
            printf("%d",0);
        }
        else{
            gamma_rate[position] = 1;
            printf("%d",1);
        }
        //reset the count for the next position
        zero_count = 0;
        one_count = 0;
    }
    /*once I have my "gamma rate" I will know the epsilon rate because it is the opposite
    I will convert the numbers to decimal and multiply them together outside of this program*/
    return 0;
}