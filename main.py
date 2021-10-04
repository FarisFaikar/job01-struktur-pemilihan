def soal_1():
    print("--- Soal 1 ---")
    print("1. Ayam Goreng\n2. Bebek Goreng\n3. Lele Goreng\n4. Tidak suka semua")
    kode = int(input("Masukan kode: "))

    if kode == 1:
        print("Anda memilih Ayam Goreng")
    elif kode == 2:
        print("Anda memilih Bebek Goreng")
    elif kode == 3:
        print("Anda memilih Lele Goreng")
    elif kode == 4:
        print("Anda tidak suka semua")
    else:
        print("Input anda salah")


def soal_2():
    print("--- Soal 2 ---")
    umur = int(input("Masukkan umur: "))

    if umur >= 18:
        status_pendaftaran = input("Masukkan status pendaftaran [terdaftar/belum terdaftar]: ")

        if status_pendaftaran == 'terdaftar':
            print("Anda berhak memilih")
        elif status_pendaftaran == 'belum terdaftar':
            print("Status anda belum terdaftar")
        else:
            print("Input anda salah")
    else:
        print("Anda belum berhak memilih")


def main():
    # soal_1()
    soal_2()


if __name__ == '__main__':
    main()
