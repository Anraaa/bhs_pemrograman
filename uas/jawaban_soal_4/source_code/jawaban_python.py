import mysql.connector
from mysql.connector import Error

def create_connection():
    """Membuat koneksi ke database MariaDB"""
    connection = None
    try:
        connection = mysql.connector.connect(
        host='db',  # Nama service MariaDB di Docker Compose
        database='test_db',
        user='user',
        password='user_password'
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
