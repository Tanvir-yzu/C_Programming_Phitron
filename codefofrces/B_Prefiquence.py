# Function to find the maximum possible value of k
def max_k(a, b):
    n = len(a)
    m = len(b)
    
    # Initialize pointers for strings a and b
    i = 0
    j = 0
    
    # Iterate through string b
    while i < n and j < m:
        # If characters match, move to the next character in string a
        if a[i] == b[j]:
            i += 1
        # Move to the next character in string b
        j += 1
    
    # Return the number of characters in string a that have been matched in string b
    return i

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input lengths of strings a and b
    n, m = map(int, input().split())
    # Input strings a and b
    a = input()
    b = input()
    # Find and print the maximum possible value of k
    print(max_k(a, b))
