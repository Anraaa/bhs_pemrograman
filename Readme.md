## GITHUB COMMAND LINE SAAT INISIALISASI PROJECT

| Command | Description |
| --------| :-----------: |
| `git init` | Digunakan untuk menginisialisasi repository Git baru di direktori kerja saat ini. Saat perintah ini dijalankan, Git akan membuat folder .git yang menyimpan semua metadata dan konfigurasi yang diperlukan untuk mengelola versi dari berkas-berkas yang ada di dalam direktori tersebut. Dengan menjalankan git init, kamu bisa mulai menggunakan Git untuk melacak perubahan-perubahan pada berkas-berkas dalam proyekmu. |
| `git add .` |  Adalah cara untuk memberi tahu Git bahwa kamu ingin menambahkan semua perubahan yang ada di dalam direktori kerja saat ini ke dalam staging area. Artinya, titik `.` merupakan singkatan untuk "semua perubahan". Dengan demikian, perintah tersebut memungkinkan Git untuk memantau dan mempersiapkan semua perubahan tersebut untuk dimasukkan dalam commit berikutnya. |
| `git commit -m "pesannya"` |  Digunakan untuk membuat commit dengan pesan tertentu. |
| `git branch -M main"` | Digunakan untuk mengganti nama branch saat ini menjadi "main". Ini biasanya digunakan ketika pengguna ingin mengubah nama branch default dari "master" menjadi "main". Dengan menggunakan opsi -M, Git akan memaksa perubahan nama branch tanpa memeriksa apakah terdapat perubahan yang belum di-merge di branch tersebut. |
| `git remote add origin (link kode ssh)` |  Digunakan untuk menambahkan remote repository dengan alias "origin". Remote repository ini biasanya merupakan repository di platform seperti GitHub. Dengan menambahkan remote "origin", Git akan mengetahui di mana untuk mengirim perubahan ketika kamu melakukan push ke repository tersebut. |

## GITHUB COMMAND LINE SAAT MAINTENANCE/MONITORING PROJECT (TAMBAH KURANG ISI FILE)

| Command | Description |
| --------| :-----------: |
| `git add .` | Perintah yang digunakan dalam Git untuk menambahkan semua perubahan yang ada dalam direktori kerja saat ini ke dalam staging area. |
| `git commit -m "pesan"` | Digunakan untuk membuat commit dalam Git dengan pesan tertentu. |
| `git push` | Digunakan untuk mengirimkan (atau "push") perubahan yang terkomit dalam repository lokal Anda ke repository yang sesuai di server Git. |
___

## ALL BASIC GITHUB COMMAND LINE

### Getting & Creating Projects

| Command | Description |
| ------- | ----------- |
| `git init` | Initialize a local Git repository |
| `git clone ssh://git@github.com/[username]/[repository-name].git` | Create a local copy of a remote repository |

### Basic Snapshotting

| Command | Description |
| ------- | ----------- |
| `git status` | Check status |
| `git add [file-name.txt]` | Add a file to the staging area |
| `git add -A` | Add all new and changed files to the staging area |
| `git commit -m "[commit message]"` | Commit changes |
| `git rm -r [file-name.txt]` | Remove a file (or folder) |

### Branching & Merging

| Command | Description |
| ------- | ----------- |
| `git branch` | List branches (the asterisk denotes the current branch) |
| `git branch -a` | List all branches (local and remote) |
| `git branch [branch name]` | Create a new branch |
| `git branch -d [branch name]` | Delete a branch |
| `git push origin --delete [branch name]` | Delete a remote branch |
| `git checkout -b [branch name]` | Create a new branch and switch to it |
| `git checkout -b [branch name] origin/[branch name]` | Clone a remote branch and switch to it |
| `git branch -m [old branch name] [new branch name]` | Rename a local branch |
| `git checkout [branch name]` | Switch to a branch |
| `git checkout -` | Switch to the branch last checked out |
| `git checkout -- [file-name.txt]` | Discard changes to a file |
| `git merge [branch name]` | Merge a branch into the active branch |
| `git merge [source branch] [target branch]` | Merge a branch into a target branch |
| `git stash` | Stash changes in a dirty working directory |
| `git stash clear` | Remove all stashed entries |

### Sharing & Updating Projects

| Command | Description |
| ------- | ----------- |
| `git push origin [branch name]` | Push a branch to your remote repository |
| `git push -u origin [branch name]` | Push changes to remote repository (and remember the branch) |
| `git push` | Push changes to remote repository (remembered branch) |
| `git push origin --delete [branch name]` | Delete a remote branch |
| `git pull` | Update local repository to the newest commit |
| `git pull origin [branch name]` | Pull changes from remote repository |
| `git remote add origin ssh://git@github.com/[username]/[repository-name].git` | Add a remote repository |
| `git remote set-url origin ssh://git@github.com/[username]/[repository-name].git` | Set a repository's origin branch to SSH |

### Inspection & Comparison

| Command | Description |
| ------- | ----------- |
| `git log` | View changes |
| `git log --summary` | View changes (detailed) |
| `git log --oneline` | View changes (briefly) |
| `git diff [source branch] [target branch]` | Preview changes before merging |

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
