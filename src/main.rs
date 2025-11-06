use std::io;
use std::cmp::Ordering;
use std::string;
use std::collections;

fn main()
{
    return 0;
}

fn DNA_to_RNA(DNA: String)
{
    let mut i:i32 = 0 ;
    let mut RNA: String ;
    loop
    {
        i+=1;
        while i<length(DNA)
        {
            if DNA[i] == 'T'
            {
                RNA[i] = 'U';
            }
            else
            {
                RNA[i]=DNA[i];
            }
        }
    }
    return RNA;
}

fn ORF_search(DNA: String)
{
    let mut i:i32 =0;
    let mut ORFs: String;
    loop
    {
        let mut codon = DNA[i] + DNA[i+1] + DNA[i+2];
        i+=1;
        while i<length(DNA)-2
        {
            if codon == 'DNA'
            {
                while codon != 'TGA' or codon != 'TAA' or codon != 'TAG'
                {
                    ORFs.append(codon);
                }
            }
        }
    }
    return ORFs;
}

