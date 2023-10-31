def findSum(s):
    # Initialize variables to store the sum and the current numeric substring
    total_sum = 0
    current_num = ''

    # Iterate through the characters in the string
    for char in s:
        # Check if the character is a digit
        if char.isdigit():
            current_num += char  # Add the digit to the current numeric substring
        else:
            if current_num:
                total_sum += int(current_num)  # Convert the substring to an integer and add it to the sum
                current_num = ''  # Reset the current numeric substring

    # Add the last numeric substring if it exists
    if current_num:
        total_sum += int(current_num)

    return total_sum

# Example 1
str1 = "1abc23"
print("Sum (Example 1):", findSum(str1))  # Output: 24

# Example 2
str2 = "geeks4geeks"
print("Sum (Example 2):", findSum(str2))  # Output: 4
