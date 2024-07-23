### Penjelasan tentang GUI
GUI (Graphical User Interface) adalah antarmuka pengguna yang memungkinkan interaksi dengan perangkat lunak melalui elemen grafis seperti jendela, tombol, menu, dan ikon, alih-alih menggunakan perintah teks berbasis command-line. GUI memudahkan pengguna untuk berinteraksi dengan aplikasi secara visual dan intuitif.

### Komponen Utama GUI
- Jendela: Area utama aplikasi tempat konten ditampilkan.
- Tombol: Elemen yang bisa diklik untuk melakukan aksi tertentu.
- Menu: Daftar opsi atau perintah yang dapat dipilih oleh pengguna.
- Formulir: Area di mana pengguna dapat memasukkan data.
- Label: Teks statis yang memberikan informasi kepada pengguna.
- Kotak Teks: Area di mana pengguna dapat mengetik input.

___

### Install Tkinter
```
apt-get install python3-tk
```

### Contoh Kode GUI dengan Tkinter di Python
```
import tkinter as tk
from tkinter import messagebox

def show_message():
    messagebox.showinfo("Info", "Hello, Tkinter!")

# Membuat instance utama dari Tkinter
root = tk.Tk()
root.title("Contoh Aplikasi GUI")

# Menentukan ukuran jendela
root.geometry("300x200")

# Membuat tombol
button = tk.Button(root, text="Klik Saya", command=show_message)
button.pack(pady=20)

# Menjalankan loop utama Tkinter
root.mainloop()

```