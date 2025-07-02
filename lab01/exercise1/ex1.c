#include <string.h>
#include "ex1.h"

/* num_occurences returns the number of times LETTER appears in STR. */
int num_occurrences(char *str, char letter) {
    int i; 
    int count = 0;
    int str_len = strlen(str);
    for (i = 0; i < str_len; i++){
        if (letter == str[i]){
            count++;
        }
    }
    return count;  
}

/* compute_nucleotide_occurrences populates DNA_SEQ with the number of times each nucleotide appears.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {   
    dna_seq->A_count = num_occurrences(dna_seq->sequence, 'A');
    dna_seq->C_count = num_occurrences(dna_seq->sequence, 'C');
    dna_seq->G_count = num_occurrences(dna_seq->sequence, 'G');
    dna_seq->T_count = num_occurrences(dna_seq->sequence, 'T');
    return;
}
