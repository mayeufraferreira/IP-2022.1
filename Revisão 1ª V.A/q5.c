#include<stdio.h>
#include<string.h>

void main() {

    int i;
    char dna[] = "ACGTACATGACATGA";
    char rna[40];

    for (i=0; i<=strlen(dna); i++) {
        if (dna[i] == 'G') {
            rna[i] = 'C';
        } else if (dna[i] == 'C') {
            rna[i] = 'G';
        } else if (dna[i] == 'T') {
            rna[i] = 'A';
        } else {
            rna[i] = 'U';
        }
    }
    rna[i] = '\0';
    printf("DNA: %s\n", dna);
    printf("RNA: %s\n", rna);
}