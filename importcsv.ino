import csv
import random

# Generate random pH between 6.5 and 7.5
def generate_random_ph():
    return round(random.uniform(6.5, 7.5), 2)

# Generate random weight between 1 and 2
def generate_random_weight():
    return round(random.uniform(1, 2), 2)

# Number of rows
num_data_points = 100

# Create CSV file and write data
with open('data.csv', 'w', newline='') as csvfile:
    fieldnames = ['pH', 'Weight']
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

    writer.writeheader()
    for _ in range(num_data_points):
        ph_value = generate_random_ph()
        weight_value = generate_random_weight()
        writer.writerow({'pH': ph_value, 'Weight': weight_value})

print("CSV file generated successfully.")
