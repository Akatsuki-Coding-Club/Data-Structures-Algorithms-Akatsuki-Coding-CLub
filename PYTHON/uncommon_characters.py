def uncommon_characters(A, B):
    set_A = set(A)
    set_B = set(B)
    uncommon_chars = sorted((set_A - set_B) | (set_B - set_A))
    return ''.join(uncommon_chars)

string_A = "geeksforgeeks"
string_B = "geeksquiz"
result = uncommon_characters(string_A, string_B)

print(f"Input:\nA = {string_A}\nB = {string_B}\nOutput: {result}")
