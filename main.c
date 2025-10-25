#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>


/* TODO : make mutliple functions to transform a DNA strand into a RNA strand or protein sequence */ 
/* Generate the hasmap */
void genRNAPRT(void );
void genDNAPRT(void );

/* DNA conversions */ 
char DNA_to_RNA(char DNA);
char DNA_to_PRT(char DNA);

/* RNA conversions */ 
char RNA_to_PRT(char RNA);
char RNA_to_DNA(char RNA);

/* TODO for later because of a complex implementation*/ 
char PRT_to_RNA(char PRT);
char PRT_to_DNA(char PRT);

/* Hashmap of RNA to AA*/ 

static char *RNA[] =
{
	
}

/* Hashmap of DNA to AA*/ 
static char *DNA[] =
{
	
}

/* Test script*/ 
void main()
{
	const char DNA;
	return 0;
}

void genRNAPRT()
{
    size_t table_size = 64;

    /* Creating the hashmap*/ 
    
    if (hcreate(table_size) == 0) {
        fprintf(stderr, "Failed to create hash table\n");
        return 1;
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

    /* Et le programme, il met les valeurs DANS la hasmap */ 
    for (int i = 0; i < num_entries; i++) {
        ENTRY item, *found;
        item.key = rnas[i];
        item.data = aas[i];

        if (hsearch(item, ENTER) == NULL) {
            fprintf(stderr, "Failed to insert %s\n", keys[i]);
        }
    }

}


void genDNAPRT()
{
    size_t table_size = 64;

    /* Creating the hashmap*/ 
    
    if (hcreate(table_size) == 0) {
        fprintf(stderr, "Failed to create hash table\n");
        return 1;
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
            fprintf(stderr, "Failed to insert %s\n", keys[i]);
        }
    }

}


char DNA_to_RNA(char DNA)
{
	/* Linear search function searching for "T" in the DNA strand and swapping them for an "U" */ 
	char RNA[];
	length = sizeof(DNA) / sizeof(DNA[0]);
	for (int i=1; i<length; i++)
	{
		if (DNA[i] == "T")
		{
			RNA[i] = "U";
		}
		else 
		{
			RNA[i] = DNA[i];
		}
	}
	return RNA; 
}

char RNA_to_DNA(char RNA)
{
	/* Linear search function searching for "U" in the RNA strand and swapping them for an "T" */ 
	char DNA[];
	length = sizeof(RNA) / sizeof(RNA[0]);
	for (int i=1; i<length; i++)
	{
		if (RNA[i] == "T")
		{
			DNA[i] = "U";
		}
		else 
		{
			DNA[i] = RNA[i];
		}
	}
	return DNA;
}

char RNA_to_PRT(char PRT)
{
	char PRT[];
	length = sizeof(RNA) / sizeof(RNA[0]);
	map = genDNAPRT();
	for (int i=1; i<lentgh; i++)
	{
		char *search_key = RNA[i];
    		ENTRY item, *found;
    		item.key = search_key;

    		if ((found = hsearch(item, FIND)) != NULL) 
    		{
        		PRT[i]=;
    		} 
    		else 
    		{       
        	        PRT[i]="XRR";
    		}
	}
	hdestroy();
	return PRT
}

char DNA_to_PRT(char PRT)
{
	char PRT[];
	length = sizeof(DNA) / sizeof(DNA[0]);
	gen
	for (int i=1; i<lentgh; i++)
	{
		char *search_key = DNA[i];
    		ENTRY item, *found;
    		item.key = search_key;

    		if ((found = hsearch(item, FIND)) != NULL) 
    		{
        		PRT[i]=;
    		} 
    		else 
    		{       
        	        PRT[i]="XRR";
    		}
	}
	return PRT
}
