list_RNAs = ["UUU", "UUC", "UUA", "UUG", "CUU", "CUC", "CUA", "CUG","AUU", "AUCU", "AUA", "AUG", "GUU", "GUC", "GUG", "GUA",
            "UCU", "UCC", "UCA", "UCG",  "CCU", "CCC", "CCA", "CCG", "ACU", "ACC", "ACA", "ACG", "GCU", "GCC", "GCG", "GCA",
            "UAU", "UAC", "UAA", "UAG", "CAU", "CAC", "CAA", "CAG", "AAU", "AAC", "AAA", "AAG", "GAU", "GAC", "GAG", "GAA",
            "UGU", "UGC", "UGA", "UGG", "CGU", "CGC", "CGA", "CGG", "AGU", "AGC", "AGA", "AGG", "GGU", "GGC", "GGG", "GGA"]
list_AAs = ["Phe", "Phe", "Leu", "Leu", "Leu", "Leu", "Leu", "Leu", "Ile", "Ile", "Ile", "Met", "Val", "Val", "Val", "Val",
            "Ser", "Ser", "Ser", "Ser", "Pro", "Pro", "Pro", "Pro", "Thr", "Thr", "Thr", "Thr", "Ala", "Ala", "Ala", "Ala",
            "Tyr", "Tyr", "STP", "STP", "His", "His", "Gln", "Gln", "Asn", "Asn", "Lys", "Lys", "Asp", "Asp", "Glu", "Glu",
            "Cys", "Cys", "STP", "Trp", "Arg", "Arg", "Arg", "Arg", "Ser", "Ser", "Arg", "Arg", "Gly", "Gly", "Gly", "Gly"]
list_DNAs = ["TTT", "TTC", "TTA", "TTG", "CTT", "CTC", "CTA", "CTG","ATT", "ATCT", "ATA", "ATG", "GTT", "GTC", "GTG", "GTA",
              "TCT", "TCC", "TCA", "TCG",  "CCT", "CCC", "CCA", "CCG", "ACT", "ACC", "ACA", "ACG", "GCT", "GCC", "GCG", "GCA",
              "TAT", "TAC", "TAA", "TAG", "CAT", "CAC", "CAA", "CAG", "AAT", "AAC", "AAA", "AAG", "GAT", "GAC", "GAG", "GAA",
              "TGT", "TGC", "TGA", "TGG", "CGT", "CGC", "CGA", "CGG", "AGT", "AGC", "AGA", "AGG", "GGU", "GGC", "GGG", "GGA"]

Ref_DNA_to_AA = dict(zip(list_DNAs, list_AAs))

def RNA_to_PRT (list_RNA):
    prt = []
    list_RNA = parser((list_RNA))
    if len(list_RNA)%3 != 0:
        return "Incorrect Strand Size"
    Ref_RNA_to_AA = dict(zip(list_RNAs, list_AAs))
    for i in range(len(list_RNA)-2):
        prt.append(Ref_RNA_to_AA[list_RNA[i]+list_RNA[i+1]+list_RNA[i+2]])
    return prt
def DNA_to_RNA(list_DNA):
    list_RNA = []
    list_DNA=parser((list_DNA))
    for i in range(len(list_DNA)):
        if list_DNA[i] == "T":
            list_RNA[i] = "U"
        else:
            list_RNA[i] = list_DNA[i]
    return list_RNA
def parser(strand):
    parsed=[]
    if type(strand) != str:
        raise Exception("Please input a string")
    for i in range(len(strand)) :
        parsed.append(f"{strand[i]}")
    return parsed

strand = ["A","A","A","A","A","A","A","A","A",]
strand2 = "ATCTACGATCGACTAGCATGCGTATCGGTACGTATGCTGACTGATGCTGACTGATGCTGATGC"

print(RNA_to_PRT((strand2)))