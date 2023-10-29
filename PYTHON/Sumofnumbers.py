def findSum(str):
    # initialize sum to 0
    sum = 0
    
    # initialize current number to empty string
    num_str = ""
    
    # iterate through each character in the string
    for char in str:
        # if the character is a digit, add it to the current number string
        if char.isdigit():
            num_str += char
        # if the character is not a digit and there is a current number string, add it to the sum and reset the current number string
        else:
            if num_str:
                sum += int(num_str)
                num_str = ""
    
    # add any remaining number string to the sum
    if num_str:
        sum += int(num_str)
    
    # return the sum
    return sum
