use std::io;
use rand::Rng;
use std::cmp::Ordering;
use std::string;

fn main()
{
    return 0;
}

fn DNA_to_RNA(DNA: string)
{
    let i:i32 = 0 ;
    let RNA: char ;
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
    return RNA
}