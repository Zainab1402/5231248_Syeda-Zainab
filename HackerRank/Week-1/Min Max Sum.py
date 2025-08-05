def min_max_sum(numbers):
    total = 0
    min_value = numbers[0]
    max_value = numbers[0]
    
    for num in numbers:
        total += num
        if num < min_value:
            min_value = num
        if num > max_value:
            max_value = num

    min_total = total - max_value
    max_total = total - min_value
    print(f"{min_total} {max_total}")

    
numbers = list(map(int, input().split()))
min_max_sum(numbers)
