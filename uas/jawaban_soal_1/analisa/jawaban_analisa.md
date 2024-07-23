### Fungsi (Function) di Python

Fungsi adalah blok kode yang dirancang untuk melakukan tugas tertentu. Fungsi membantu membuat kode lebih modular dan mudah dibaca, serta memudahkan untuk melakukan tugas yang berulang tanpa menulis ulang kode

```py
def greet(name):
    """Mencetak salam kepada pengguna"""
    print(f"Hello, {name}!")

# Memanggil fungsi
greet("Alice")
```

Pada contoh di atas, greet adalah nama fungsi, name adalah parameter, dan fungsi tersebut mencetak pesan salam kepada nama yang diberikan.

___

### Rekursif di Python
Rekursif adalah teknik di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan tugas. Fungsi rekursif biasanya digunakan untuk menyelesaikan masalah yang dapat dipecah menjadi sub-masalah yang lebih kecil dengan struktur yang sama.

Contoh Fungsi Rekursif: Faktorial
```py
def factorial(n):
    """Menghitung faktorial dari n secara rekursif"""
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Menghitung faktorial dari 5
print(factorial(5))  # Output: 120

```