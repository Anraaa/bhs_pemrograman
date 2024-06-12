[client]
port=3306
default-character-set = utf8mb4

[mysqld]
port=3306
character-set-server = utf8mb4
skip-character-set-client-handshake
skip-name-resolve
lower_case_table_names = 1
default-storage-engine = InnoDB
innodb_file_format = Barracuda
innodb_file_per_table = 1
innodb_log_file_size = 512M
innodb_strict_mode = 0

log_error = /var/log/mysql/error.log
general_log_file = /var/log/mysql/general.log
general_log = 0
slow_query_log = 1
slow_query_log_file = /var/log/mysql/slow-query.log
long_query_time = 1
log_queries_not_using_indexes = 1
# network
connect_timeout = 61
wait_timeout = 86400
max_connections = 500
max_allowed_packet = 256M
max_connect_errors = 100
# limits
tmp_table_size = 1024M
max_heap_table_size = 1024M
table_cache = 1024