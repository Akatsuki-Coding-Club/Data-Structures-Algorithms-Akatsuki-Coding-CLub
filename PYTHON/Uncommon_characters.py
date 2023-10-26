def uncommon_char(a,b):
    #converts strings into set
    a = set(a)
    b = set(b)
    #all chars in one set
    all_char = a.union(b)
    #finding the uncommon chars
    uncommon = all_char.difference(a).union(all_char.difference(b))

    #converting set to list then sort it and convert to string and returning
    return "".join(sorted(list(uncommon)))

a = input("Enter first string: ")
b = input("Enter second string: ")
print(uncommon_char(a, b))
