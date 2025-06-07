import mysql.connector
import pandas as pd

print("MySQL Connector installed successfully!")

# Connect to MySQL
cnx = mysql.connector.connect(
    host="localhost",
    port=3306,
    user="root",
    password="AshiMeena12",
    database="banking_case"  # Add the database name here
)

# Create a cursor
cursor = cnx.cursor()

# SQL query
query = "SELECT * FROM customer"

# Execute the query
cursor.execute(query)

# Fetch column names
columns = [desc[0] for desc in cursor.description]

# Fetch all data
rows = cursor.fetchall()

# Create DataFrame
df = pd.DataFrame(rows, columns=columns)

# Close connection
cursor.close()
cnx.close()

# Show result
print(df.head())
print(df.describe())