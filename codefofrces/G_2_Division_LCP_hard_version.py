def build_lcp_array(s):
    n = len(s)
    lcp = [0] * n
    j = 0
    for i in range(1, n):
        while j > 0 and s[i] != s[j]:
            j = lcp[j - 1]
        if s[i] == s[j]:
            j += 1
        lcp[i] = j
    return lcp

def lcp_division(s, l, r):
    n = len(s)
    result = []
    
    # Build LCP array for string s
    lcp_array = build_lcp_array(s)
    
    # Iterate over division sizes within the range [l, r]
    for k in range(l, r + 1):
        max_lcp = 0
        
        # Iterate over the string to find the maximum LCP for division size k
        for i in range(n - k + 1):
            lcp_value = min(lcp_array[i + k - 1], k)
            max_lcp = max(max_lcp, lcp_value)
        
        result.append(max_lcp)
    
    return result

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input values of n, l, and r
    n, l, r = map(int, input().split())
    # Input string s
    s = input()
    # Find and print the maximum LCP values for each division size within range [l, r]
    result = lcp_division(s, l, r)
    print(*result)
