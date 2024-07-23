###
Untuk berkomunikasi dengan database MariaDB menggunakan bahasa pemrograman Python, dapat menggunakan library mysql-connector-python. Library ini memungkinkan Anda untuk melakukan operasi CRUD (Create, Read, Update, Delete) pada database MariaDB dari aplikasi Python.

___

### Langkah-langkah
#### Instalasi library

```
pip install mysql-connector-python
```

#### Docker Compose
buatlah file dengan nama docker-compose.yml lalu pastekan code dibawah
```
version: '3.8'

services:
  db:
    image: mariadb:10.5
    container_name: mariadb
    environment:
      MYSQL_ROOT_PASSWORD: root_password
      MYSQL_DATABASE: test_db
      MYSQL_USER: user
      MYSQL_PASSWORD: user_password
    ports:
      - "3306:3306"
    volumes:
      - db_data:/var/lib/mysql

  app:
    image: python:3.9
    container_name: python_app
    working_dir: /app
    volumes:
      - ./app:/app
    depends_on:
      - db
    command: ["python", "app.py"]

volumes:
  db_data:

```

#### Jalankan Docker
Kemudian build dockernya
```
docker-compose up -d --build
```

#### Contoh Kode Menggunakan mysql-connector-python
```py
import mysql.connector
from mysql.connector import Error

def create_connection():
    """Membuat koneksi ke database MariaDB"""
    connection = None
    try:
        connection = mysql.connector.connect(
            host='localhost',
            database='test_db',
            user='your_username',
            password='your_password'
        )
        if connection.is_connected():
            print("Koneksi ke database MariaDB berhasil")
    except Error as e:
        print(f"Error: '{e}'")
    return connection

def create_table(connection):
    """Membuat tabel users"""
    create_users_table_query = '''
    CREATE TABLE IF NOT EXISTS users (
        id INT AUTO_INCREMENT PRIMARY KEY,
        name VARCHAR(255) NOT NULL,
        age INT NOT NULL
    )
    '''
    cursor = connection.cursor()
    try:
        cursor.execute(create_users_table_query)
        print("Tabel users berhasil dibuat")
    except Error as e:
        print(f"Error: '{e}'")

def insert_user(connection, name, age):
    """Menyisipkan data ke tabel users"""
    insert_user_query = '''
    INSERT INTO users (name, age) VALUES (%s, %s)
    '''
    cursor = connection.cursor()
    try:
        cursor.execute(insert_user_query, (name, age))
        connection.commit()
        print("User berhasil disisipkan")
    except Error as e:
        print(f"Error: '{e}'")

def fetch_users(connection):
    """Mengambil data dari tabel users"""
    fetch_users_query = '''
    SELECT * FROM users
    '''
    cursor = connection.cursor()
    try:
        cursor.execute(fetch_users_query)
        rows = cursor.fetchall()
        for row in rows:
            print(row)
    except Error as e:
        print(f"Error: '{e}'")

def main():
    # Membuat koneksi ke database
    connection = create_connection()
    
    if connection.is_connected():
        # Membuat tabel users
        create_table(connection)
        
        # Menyisipkan data ke tabel users
        insert_user(connection, 'Alice', 30)
        insert_user(connection, 'Bob', 25)
        
        # Mengambil data dari tabel users
        fetch_users(connection)
        
        # Menutup koneksi
        connection.close()
        print("Koneksi ke database MariaDB ditutup")

if __name__ == "__main__":
    main()

```

