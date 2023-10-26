#function to check whether a number is palindrome or not
def is_palindrome(num):
    original_num = num
    reversed_num = 0

    # reverse the num and save in the new variable(num)
    while num>0:
        digit = num%10
        reversed_num = reversed_num*10 + digit
        num = num//10
    
    return reversed_num==original_num

num = int(input("Enter the number: "))
if is_palindrome(num):
    print("true")
else:
    print("false")
