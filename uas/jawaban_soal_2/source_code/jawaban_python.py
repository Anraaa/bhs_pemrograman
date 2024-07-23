def divide(a, b):
    """Membagi dua angka dan menangani pembagian dengan nol"""
    try:
        result = a / b
    except ZeroDivisionError:
        print("Error: Tidak bisa membagi dengan nol!")
        return None
    else:
        return result
    finally:
        print("Operasi pembagian selesai.")

# Contoh penggunaan
print(divide(10, 2))  # Output: 5.0
print(divide(10, 0))  # Output: Error: Tidak bisa membagi dengan nol!
