def anagram(a,b):
    a = sorted(list(a))
    b = sorted(list(b))

    return a==b

a = input("Enter first string: ")
b = input("Enter second string: ")

print(anagram(a,b))
