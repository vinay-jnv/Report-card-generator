/*

	Program:	Report Card Generator App
	Author: 	Vinay kumar
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {

	// Declaring required variables
	char name[30], section, grade;
	int standard, mathsScore, englishScore, hindiScore, scienceScore, sscScore, totalScore;

	// Welcome message
	puts("---------------------------------------------------");
	puts("|=========== REPORT CARD GENERATOR APP ===========|");
	puts("---------------------------------------------------");

	// User input
	puts("Enter the name of the student: ");
	scanf("%[^\n]%*c", name);

	puts("\nEnter standard: ");
	scanf("%d", &standard);

	// Clear input buffer as needed 
	while ((getchar()) != '\n');

	puts("\nEnter section:");
	scanf("%c", &section);

	puts("\nEnter marks secured in Mathematics: ");
    scanf("%d", &mathsScore);

    puts("\nEnter marks secured in English: ");
    scanf("%d", &englishScore);

    puts("\nEnter marks secured in Hindi: ");
    scanf("%d", &hindiScore);

    puts("\nEnter marks secured in Science: ");
    scanf("%d", &scienceScore);

    puts("\nEnter marks secured in Social Science: ");
    scanf("%d", &sscScore);

    totalScore = mathsScore + englishScore + hindiScore + scienceScore + sscScore;

    // Terminate program if the totalScore is invalid
    if (totalScore > 500 || totalScore < 0) {
    	puts("Total score cannot not be greater than 500. Please try again!");
    	exit(0);	// Terminate the program.
    }

    // Deciding grade
    if (totalScore >= 450 && totalScore <= 500) {
        grade = 'A';
    } else if (totalScore >= 400 && totalScore < 450) {
        grade = 'B';
    } else if (totalScore >= 350 && totalScore < 400) {
        grade = 'C';
    } else if (totalScore >= 300 && totalScore < 350) {
        grade = 'D';
    } else if (totalScore >= 200 && totalScore < 300) {
        grade = 'E';
    } else { // if (totalScore >= 0 && totalScore < 200)
        grade = 'F';
    }

    // Final output
    puts("\nGenerating Report Card! Please wait.... ");
    sleep(20);//time delay in result for seconds

    puts("------------------------------------------\n");
    puts("\tJawahar Navodaya Vidyalaya \n");
    puts("\t    Annual Report Card \n");

    printf("\tName: %s \n", name);
    printf("\tStandard: %d \n", standard);
    printf("\tSection: %c \n", section);

    puts("\n\tMarks Secured out of 100\n");

    printf("\tMathematics: %d \n", mathsScore);
    printf("\tEnglish: %d \n", englishScore);
    printf("\tHindi: %d \n", hindiScore); 
    printf("\tScience: %d \n", scienceScore);
    printf("\tSocial Science: %d \n", sscScore);

    printf("\n\tTotal marks secured: %d \n", totalScore);

    printf("\tGrade: %c \n", grade);
    puts("------------------------------------------\n");

	return 0;
}