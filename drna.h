//
// Created by evanlechenadec on 30/10/2025.
//

#ifndef DRNA_DRNA_H
#define DRNA_DRNA_H

char* ORF_search(char *DNA);
void genRNAPRT(void);
void genDNAPRT(void);
char* DNA_to_RNA(char *DNA);
char DNA_to_PRT(char *DNA);
char RNA_to_PRT(char *RNA);
char* RNA_to_DNA(char *RNA);
char PRT_to_RNA(char PRT);
char PRT_to_DNA(char PRT);

#endif //DRNA_DRNA_H