def factorial(n):
    """Menghitung faktorial dari n secara rekursif"""
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Menghitung faktorial dari 5
print("hasil faktorial 5 adalah: ")
print(factorial(5))  # Output: 120
