# DRNA
A simple library to convert DNA strands or RNA strands in the form of an array of character into another array of 
character representing the alpha-amino acids making up the protein. 

## I) Functions
### 1) genDNAPRT and genRNAPRT

Those functions generate hashtables to convert a DNA/RNA codon into alpha-amino acids. 
Each codons DNA/RNA are a string of 3 nucleotides ex "ATC" and each alpha-amino acids are written as a string of 3 
caracters ex "Lys".

### 2) Convert to RNA/DNA 

The DNA_to_RNA and RNA_to_DNA functions do a linear search through the whole string representing the DNA/RNA string and 
replace the "T" or "U"by a "T" or a "U". Pretty self-explenatory. 

### 3) Searching the ORF 

The compt_ORF function count the number of "ATC" codon follow by a STOP codon in a given strand to approximate the 
number of ORF in a given strand. It's a linear search function. 

The ORF_search function does a linear search through the given DNA strand, searching for the "ATC" codon. Once it has 
found it, it copies the following codons into a separate array until it has found one of the STOP codon. Once it has 
found it, the copied array is stored into an array. The array is then returned once the whole strand has been passed 
through the function. 