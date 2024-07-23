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
