# python_fixed.py -- corrected
def calculate_sum(arr):
    total = 0
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
print("Sum in Python:", calculate_sum(numbers))
