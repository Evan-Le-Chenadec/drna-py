# DRNA
A simple library to convert DNA strands or RNA strands in the form of an array of character into another array of 
character representing the alpha-amino acids making up the protein. 

## I) Functions
### 1) DNA_to_RNA and RNA_to_DNA

Those functions convert a DNA strand in the form of a string into a RNA strand also in the form of a string.
It simply does a linear search through the string until it finds a "T" or a "U" and swap them. Those functions operate 
in linear time.

### 2) DNA_to_PRT and RNA_to_PRT

Those functions convert either a DNA strand or a RNA strand in the form of a string into a list of amino-acids 
represented by their 3 letters acronyms in the form of a string (ex; "Lys"). It first create a dictionnary with either
the list_DNAs/list_RNAs and the list_AAs. Then, it iterates through the strand by step of three (the codon variable) and
search in the dictionnary the corresponding amino acid. 

### 3) DNA_ORF_search and RNA_ORF_search

Those functions search for the opening reading frames in a DNA/RNA strand. It does it by first searching for an start 
codon "ATC" and stores it's index. Once it has found one, it then search for a STOP codon ("TAA", "TAG", "TGA") and 
stores it's index. Then, the function appends the section of the strand found into the list_ORF. 

### 4) DNA_ORF_to_PRT and RNA_ORF_to_PRT

Those functions use the previous DNA/RNA_ORF_search and DNA/RNA_to_PRT to create a list of lists of amino acids. 

## II) Classes 
Classes have been written but neither tested nor properly implemented. 
### 1) DNA 
### 2) RNA 