def lonely_integer(a):
    result = 0
    for num in a:
        result ^= num
    return result

# Reading input
n = int(input())                   
arr = list(map(int, input().split())) 


if len(arr) != n:
    print("No of integers does not match the specified length.")
else:
    print(lonely_integer(arr))
