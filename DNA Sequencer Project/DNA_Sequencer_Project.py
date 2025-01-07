print("Hello world!")
name = input("What is your name?\n")
print("Nice to meet you " + name)
sequence = input ("Input your DNA sequence :\n")

for base in sequence:
    if base == "A":
        print ("T",end = "")
    elif base == "T":
        print ("A" ,end = "")
    elif base == "C":
        print ("G",end = "")
    elif base == "G":
        print ("C",end = "")