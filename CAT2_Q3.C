/*NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DESCRIPTION:CFILE program
*/

#include <stdio.h>

int main() {
    // Input 10 integers and store them in "input.txt"
    FILE *fptr = fopen("C:\\Users\\zack stevens\\Desktop\\input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening input.txt for writing.\n");
        return 1;
    }
    int num;
    for (int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }
    fclose(fptr);

    // Read integers from "input.txt", calculate sum and average, and write to "output.txt"
    FILE *inputfptr = fopen("C:\\Users\\zack stevens\\Desktop\\input.txt", "r");
    if (inputfptr == NULL) {
        printf("Error opening input.txt for reading.\n");
        return 1;
    }
    FILE *outputfptr = fopen("C:\\Users\\zack stevens\\Desktop\\output.txt", "w");
    if (outputfptr == NULL) {
        printf("Error opening output.txt for writing.\n");
        fclose(inputfptr);
        return 1;
    }
    int sum = 0, count = 0;
    while (fscanf(inputfptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    float average = count > 0 ? (float)sum / count : 0;
    fprintf(outputfptr, "Sum: %d\nAverage: %.2f\n", sum, average);
    fclose(inputfptr);
    fclose(outputfptr);

    // Read and display contents of both "input.txt" and "output.txt"
    inputfptr= fopen("C:\\Users\\zack stevens\\Desktop\\input.txt", "r");
    if (inputfptr == NULL) {
        printf("Error opening input.txt for reading.\n");
        return 1;
    }
    printf("Contents of input.txt:\n");
    while (fscanf(inputfptr, "%d", &num) == 1) {
        printf("%d\n", num);
    }
    fclose(inputfptr);

    outputfptr = fopen("C:\\Users\\zack stevens\\Desktop\\output.txt", "r");
    if (outputfptr == NULL) {
        printf("Error opening output.txt for reading.\n");
        return 1;
    }
    printf("\nContents of output.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), outputfptr)) {
        printf("%s", line);
    }
    fclose(outputfptr);

    return 0;
}