class Nama:
    def full(self, first_name, middle_name, last_name):
        print("FULL NAME :", first_name, middle_name, last_name)

def main():
    n = Nama()

    while True:
        print("MENU SOAL 4: ")
        print("1. Input ")
        print("2. Keluar\n")
        
        pilih = input("Pilihan anda: ")

        if pilih == '1':
            first_name = input("Masukan Nama Depan : ")
            middle_name = input("Masukan Nama Tengah : ")
            last_name = input("Masukan Nama Belakang : ")
            n.full(first_name, middle_name, last_name)
        elif pilih == '2':
            print("\nTERIMA KASIH")
            break
        else:
            print("Pilihan Invalid ")

        pil = input("Ingin kembali ke menu? (Y/N) : ")
        if pil.lower() != 'y':
            print("\nTERIMA KASIH")
            break

if __name__ == "__main__":
    main()