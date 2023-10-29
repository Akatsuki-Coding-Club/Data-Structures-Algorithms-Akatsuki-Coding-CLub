def convertToRoman(n):
    symbols = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
    values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    roman = ''
    i = 0
    while n > 0:
        if values[i] <= n:
            roman += symbols[i]
            n -= values[i]
        else:
            i += 1
    return roman
