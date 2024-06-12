## RANGKUMAN

### 1. Definisi
Array (dalam sebuah python) merupakan struktur yang dapat menyimpan dan mengatur set data. Struktur data membicarakan tentang penyimpanan, mengatur, pengelompokan, dan mempresentasikan 

___

### 2. Set
Set adalah tipe data kolektif yang digunakan untuk menyimpan beberapa nilai unik satu variabel. nilai unik set antara lain :
- set hanya menyimpan nilai unik (bukan duplikat)
- setelah nilai di masukkan ke dalam set, nilai tidak dapat dirubah
- set tidak memiliki urutan, sehingga tidak dapat diakses berdasarkan indeks

contoh dalam set

```
student_set = {'Huda', 'Lendis', 'wahid'}
print (student_set)

fruit_set = {['manggo', 'apple']}
print (fruit_set)
```

Outputnya

~~~
{'Huda', 'Lendis', 'wahid'}
{'manggo', 'apple'}
~~~

---

#### a. unrordered (set)
Tipe Data set tidak berurut. Bahkan jika kita paksa, kit hanya mendapat pesan error:
```
my_set = {'a'}
print(my_set[0])
```

pesan errornya:
```
Traceback (most recent call last)
File "<stdin>", line 1, in <module>
TypeError: 'set' object is note subscriptable
```

kita bisa juga melihat kode program yang kita bikin awal
```
student_set = {'Huda', 'Lendis', 'wahid'}
print (student_set)
```
outputnya
```
{'Huda', 'Lendis', 'wahid'}
```
---
#### b. Unchangeable (set)
Tipe data set tidak bisa diganti, yang dimana nilai yang telat kita masukkan kedalam set tidak bisa diganti lagi

perhatikan contoh berikut
```
set_fruit = {'manggo', 'apple', True, 1, 2, 3}

keyboard_= {
    (1, 2, 3),
    (4, 5, 6),
    (7, 8, 9),
    (0)
}
```

namun kita tidak dapat menyertakan list sebagai anggota karena list tidak dapat dirubah. perhatikan contoh berikut
```
x = set{ 35, 100, ['a', 'b']}
```

pesan error:
```
Traceback (most recent call last)
File "<stdin>", line 1, in <module>
TypeError: unhashable type: 'list'
```
---
#### c. No Duplicate Values (set)
Di python juga tidak bisa menduplikasi suatu nilai. Jika kita memasukkan nilai yang sudah ada di dalam sebuah set, lalu nilai itu akan hanya akan muncul pada nilai yang kita masukkan pertama kali. contoh
```
unique_word = {
    'morning', 'this', 'is', 'morning', 'which', 'very', 'bright'
}

print(unique_word)
```