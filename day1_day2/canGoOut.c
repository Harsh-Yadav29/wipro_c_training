#include <stdio.h>

int main() {
    int rain, sunny, temp, cloudy, light;
    scanf("%d %d %d %d %d", &rain, &sunny, &temp, &cloudy, &light);
    
    if(!rain) {
        printf("person can travel.");
    }
    else if(sunny && temp <= 35) {
        printf("person can travel.");
    }
    else if(cloudy && !light) {
        printf("person can travel.");
    }
    
    return 0;
}