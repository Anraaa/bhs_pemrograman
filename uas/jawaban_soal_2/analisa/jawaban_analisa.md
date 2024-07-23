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

### Exception Handling
Exception handling adalah mekanisme untuk menangani error atau exception yang terjadi saat program dijalankan. Python menggunakan blok try, except, else, dan finally untuk menangani exception.

- try: Menentukan blok kode yang mungkin menghasilkan exception.
- except: Menangkap dan menangani exception.
- else: Menjalankan kode jika tidak ada exception yang terjadi.
- finally: Menjalankan kode terlepas dari apakah exception terjadi atau tidak.

Contoh Contoh Exception Handling
```py
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
```

Pada contoh di atas:

- Blok try mencoba membagi dua angka.
- Jika terjadi ZeroDivisionError (pembagian dengan nol), blok - except menangani error tersebut dan mencetak pesan error.
- Blok else berjalan jika tidak ada exception.
- Blok finally berjalan terlepas dari apakah ada exception atau tidak.