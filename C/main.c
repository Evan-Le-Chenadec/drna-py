#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>
#include <signal.h>
#include <iso646.h>

/* TODO : make mutliple functions to transform a DNA strand into a RNA strand or protein sequence */
/* Generate the hashmap */
void genRNAPRT(void);
void genDNAPRT(void);

/* ORF search and addition */
char* ORF_search(char *DNA);

/* DNA conversions */ 
char* DNA_to_RNA(char *DNA);
char DNA_to_PRT(char *DNA);

/* RNA conversions */ 
char RNA_to_PRT(char *RNA);
char* RNA_to_DNA(char *RNA);

/* Test script*/ 
int main(void)
{
	const char DNA[3] = "DNA";
	char codon = DNA[0]+DNA[1]+DNA[2];
	return 0;
}

int compt_ORF(char *DNA) {
	int n = 0;
	for (int i=0; i<strlen(DNA)-2; i++) {
		char codon[] = DNA[i]+DNA[i+1]+DNA[i+2];
		if (codon == 'ATC')
		{
			n +=1;
		}
	}
	return n;
}

char* ORF_search(char *DNA) {
	char list_orf[];
	for (int i = 0; i < strlen(DNA)-2; i++) {
		char codon[] = DNA[i]+DNA[i+1]+DNA[i+2];
		if codon == 'ATC'
		{
			while (codon != 'TAA') or (codon != 'TGA') or (codon != 'TAG'))
			{

			}
		}
	}
}

void genRNAPRT()
{
    const size_t table_size = 64;

    /* Creating the hashmap*/ 
    
    if (hcreate(table_size) == 0) {
        fprintf(stderr, "Failed to create hash table\n");
        raise(SIGILL);
    }

    /* Defining the hashmap properly */ 
    char *rnas[] = {"UUU", "UUC", "UUA", "UUG", "CUU", "CUC", "CUA", "CUG","AUU", "AUCU", "AUA", "AUG", "GUU", "GUC", "GUG", "GUA",
    		    "UCU", "UCC", "UCA", "UCG",  "CCU", "CCC", "CCA", "CCG", "ACU", "ACC", "ACA", "ACG", "GCU", "GCC", "GCG", "GCA", 
    		    "UAU", "UAC", "UAA", "UAG", "CAU", "CAC", "CAA", "CAG", "AAU", "AAC", "AAA", "AAG", "GAU", "GAC", "GAG", "GAA", 
    		    "UGU", "UGC", "UGA", "UGG", "CGU", "CGC", "CGA", "CGG", "AGU", "AGC", "AGA", "AGG", "GGU", "GGC", "GGG", "GGA"};
    char *aas[] = {"Phe", "Phe", "Leu", "Leu", "Leu", "Leu", "Leu", "Leu", "Ile", "Ile", "Ile", "Met", "Val", "Val", "Val", "Val", 
    		    "Ser", "Ser", "Ser", "Ser", "Pro", "Pro", "Pro", "Pro", "Thr", "Thr", "Thr", "Thr", "Ala", "Ala", "Ala", "Ala", 
    		    "Tyr", "Tyr", "STP", "STP", "His", "His", "Gln", "Gln", "Asn", "Asn", "Lys", "Lys", "Asp", "Asp", "Glu", "Glu",
    		    "Cys", "Cys", "STP", "Trp", "Arg", "Arg", "Arg", "Arg", "Ser", "Ser", "Arg", "Arg", "Gly", "Gly", "Gly", "Gly", };
    int num_entries = sizeof(rnas) / sizeof(rnas[0]);

    /* Et le programme, il met les valeurs DANS la hashmap */
    for (int i = 0; i < num_entries; i++) {
        ENTRY item, *found;
        item.key = rnas[i];
        item.data = aas[i];

        if (hsearch(item, ENTER) == NULL) {
            fprintf(stderr, "Failed to insert %s\n", aas[i]);
        }
    }

}

void genDNAPRT()
{
    size_t table_size = 64;

    /* Creating the hashmap*/ 
    
    if (hcreate(table_size) == 0) {
        fprintf(stderr, "Failed to create hash table\n");
        raise(SIGILL);
    }

    /* Defining the hashmap properly */ 
    char *dnas[] = {"TTT", "TTC", "TTA", "TTG", "CTT", "CTC", "CTA", "CTG","ATT", "ATCT", "ATA", "ATG", "GTT", "GTC", "GTG", "GTA",
    		    "TCT", "TCC", "TCA", "TCG",  "CCT", "CCC", "CCA", "CCG", "ACT", "ACC", "ACA", "ACG", "GCT", "GCC", "GCG", "GCA", 
    		    "TAT", "TAC", "TAA", "TAG", "CAT", "CAC", "CAA", "CAG", "AAT", "AAC", "AAA", "AAG", "GAT", "GAC", "GAG", "GAA", 
    		    "TGT", "TGC", "TGA", "TGG", "CGT", "CGC", "CGA", "CGG", "AGT", "AGC", "AGA", "AGG", "GGU", "GGC", "GGG", "GGA"};
    char *aas[] = {"Phe", "Phe", "Leu", "Leu", "Leu", "Leu", "Leu", "Leu", "Ile", "Ile", "Ile", "Met", "Val", "Val", "Val", "Val", 
    		    "Ser", "Ser", "Ser", "Ser", "Pro", "Pro", "Pro", "Pro", "Thr", "Thr", "Thr", "Thr", "Ala", "Ala", "Ala", "Ala", 
    		    "Tyr", "Tyr", "STP", "STP", "His", "His", "Gln", "Gln", "Asn", "Asn", "Lys", "Lys", "Asp", "Asp", "Glu", "Glu",
    		    "Cys", "Cys", "STP", "Trp", "Arg", "Arg", "Arg", "Arg", "Ser", "Ser", "Arg", "Arg", "Gly", "Gly", "Gly", "Gly", };
    int num_entries = sizeof(dnas) / sizeof(dnas[0]);

    /* Et le programme, il met les valeurs DANS la hasmap */ 
    for (int i = 0; i < num_entries; i++) {
        ENTRY item, *found;
        item.key = dnas[i];
        item.data = aas[i];

        if (hsearch(item, ENTER) == NULL) {
            fprintf(stderr, "Failed to insert %s\n", aas[i]);
        }
    }

}

char* DNA_to_RNA(char *DNA)
{
	/* Linear search function searching for "T" in the DNA strand and swapping them for an "U" */

	long const length = strlen(DNA);
	char RNA[length];
	for (int i=0; i<length; i++)
	{
		if (DNA[i] == 'T')
		{
			RNA[i] = 'U';
		}
		else 
		{
			RNA[i] = DNA[i];
		}
	}
	RNA[length] = '\0';
	return RNA; 
}

char* RNA_to_DNA(char *RNA)
{
	/* Linear search function searching for "U" in the RNA strand and swapping them for an "T" */
	long const length = strlen(RNA);
	char DNA[length];
	for (int i=1; i<length; i++)
	{
		if (RNA[i] == 'T')
		{
			DNA[i] = 'U';
		}
		else 
		{
			DNA[i] = RNA[i];
		}
	}
	DNA[length] = '\0';
	return DNA;
}

char RNA_to_PRT(char *RNA)
{
	genRNAPRT();
	long rna_lentgh = strlen(RNA);
	int num_condons = rna_lentgh / 3;
	char PRT[num_condons];

	for (int i=0; i<num_condons; i++)
	{
		char codon[4];
		strncpy(codon, &RNA[i * 3], 3);
		codon[3] = '\0';

		ENTRY item, *found;
		item.key = codon;

		if ((found = hsearch(item, ENTER)) == NULL)
		{
			strncpy(&PRT[i*3], (char *)found->data, 3);

		}
		else
		{
			strncpy(&PRT[i*3], "XRR", 3);
		}
	}
	PRT[num_condons * 3] = '\0';
	hdestroy();
}

char DNA_to_PRT(char *DNA)
{
	genDNAPRT();
	long dna_lentgh = strlen(DNA);
	int num_condons = dna_lentgh / 3;
	char PRT[num_condons];

	for (int i=0; i<num_condons; i++)
	{
		char codon[4];
		strncpy(codon, &DNA[i * 3], 3);
		codon[3] = '\0';

		ENTRY item, *found;
		item.key = codon;

		if ((found = hsearch(item, ENTER)) == NULL)
		{
			strncpy(&PRT[i*3], (char *)found->data, 3);

		}
		else
		{
			strncpy(&PRT[i*3], "XRR", 3);
		}
	}
	PRT[num_condons * 3] = '\0';
	hdestroy();
}
