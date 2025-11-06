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
    if len(list_RNA)%3 != 0:
        return "Incorrect Strand Size"
    Ref_RNA_to_AA = dict(zip(list_RNAs, list_AAs))
    for i in range(len(list_RNA)-2):
        prt.append(Ref_RNA_to_AA[list_RNA[i]+list_RNA[i+1]+list_RNA[i+2]])
    return prt
def DNA_to_RNA(list_DNA):
    list_RNA = []
    for i in range(len(list_DNA)):
        if list_DNA[i] == "T":
            list_RNA[i] = "U"
        else:
            list_RNA[i] = list_DNA[i]
    return list_RNA
def ORF_search(list_DNA):
    list_ORF = []
    for i in range(len(list_DNA)-2):
        if list_DNA[i:i+3] == 'ATG':
            for j in range(i+3, len(list_DNA)-2, 3):
                if list_DNA[j:j+3] in ("TAA", "TAG", "TGA"):
                    list_ORF.append(list_DNA[i:j+3])
                    break
    return list_ORF

with open("dummy.txt", 'r') as t:
    strand3 = t.read()

print(ORF_search(strand3))