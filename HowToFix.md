## How To FIX `error: failed to push some ref to [remote repo]`

*Untuk mengatasi masalah ini, jalankan perintah git pull pada repositori lokal Anda. Hal ini seharusnya memungkinkan Anda untuk melakukan push ke origin lagi.*

```git
git pull origin [branch]
git push origin [branch]
```
___
*Jika Anda mendapatkan kesalahan master (non-fast-forward) dengan pesan error "failed to push some refs to", ini berarti pointer ref telah dipindahkan maju dalam commit history. Namun, jika kode Anda bercabang sebelum mencapai commit terbaru, hal ini dapat menyebabkan masalah non-fast-forward dan menyebabkan kesalahan "failed to push some refs to".*

*Untuk mengatasi masalah ini, Anda dapat melakukan pull dengan menggunakan opsi `--rebase`. `--rebase` akan memungkinkan Anda untuk memindahkan file yang dimaksud ke commit terbaru dari kode yang Anda tarik.*

```
git pull --rebase origin [branch]
git push -u origin [branch]
```
___

> :memo: **Note:** Menggunakan `--force` untuk mencoba memperbaiki kesalahan "failed to push some refs to" hanya akan menghasilkan lebih banyak kesalahan dalam jangka panjang. Ini terjadi karena `--force` menggunakan metode kekerasan yang menjadikan kode Anda saat ini dan ref head-nya sebagai sumber kebenaran.

> :memo: **Note:** Akibatnya, perubahan di remote dapat ditimpa oleh apa yang telah Anda dorong, menghapus fitur atau pembaruan yang mungkin telah dikomit oleh pengembang lain.

> :memo: **Note:** Hanya gunakan `--force` jika Anda nyaman dengan fitur yang tidak ada di lokal Anda akan ditimpa dengan apa yang Anda miliki saat ini. Gunakan opsi `--force` jika Anda yakin bahwa repositori lokal Anda dalam keadaan yang benar saat ini.