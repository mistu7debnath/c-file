//Write a program in c which will add 2 to distances given in feet and inches
#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d;
    printf("Enter feet: ");
    scanf("%d", &d.feet);

    printf("Enter inches: ");
    scanf("%d", &d.inches);
    d.feet += 2;
    
    while (d.inches >= 12) {
        d.inches -= 12;
        d.feet += 1;
    }
    printf("Updated distance: %d feet %d inches\n", d.feet, d.inches);

    return 0;
}
