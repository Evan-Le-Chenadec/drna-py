import __init__ as drna

with open("dummy.txt", 'r') as t:
    strand3 = t.read()

print(drna.ORF_to_PRT(strand3))