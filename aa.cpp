#include <stdio.h>

int main() {
    int height, age, citizenship_code, recommended_code;

    printf("Enter applicant's height (in cm): ");
    scanf("%d", &height);

    printf("Enter applicant's age: ");
    scanf("%d", &age);

    printf("Enter applicant's citizenship code (1 for citizen, 0 for not): ");
    scanf("%d", &citizenship_code);

    printf("Enter recommendation status (1 for recommended, 0 for not): ");
    scanf("%d", &recommended_code);

    if (recommended_code == 1) {
        printf("Accepted\n");
    } 
	
	else {
        if (height >= 200) {
            if (age >= 21 && age <= 25) {
                if (citizenship_code == 1) {
                    printf("Accepted\n");  
                } else {
                    printf("Rejected\n");
                }
            } else {
                printf("Rejected\n");
            }
        } else {
            printf("Rejected\n");
        }
    }

    return 0;
}
