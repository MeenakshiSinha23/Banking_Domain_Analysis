
## 📘 Project Title: Banking Case Analytics Project

This project focuses on analyzing a banking dataset using **MySQL**, **Python**, and **Power BI**. The objective is to understand customer behavior, credit card usage, income distribution, and risk classification to support business decision-making.

---

### 🧩 Tools & Technologies Used

* **MySQL & MySQL Workbench** – Used to store, manage, and query the banking data.
* **Python (Pandas, Matplotlib, Seaborn)** – Used for data cleaning, exploration, and visualization.
* **Power BI** – Used to create interactive dashboards for business insights.

---

### 🔧 Step-by-Step Project Setup

#### 1. **Setting up the MySQL Database**

* Open MySQL Workbench.
* Create a new schema named `banking_case`.
* Use `root` as the default username and `localhost:3306` as the server address.
* Import your tables such as `customer`, `transactions`, etc.
* Test with commands like `SHOW TABLES;` and `SELECT * FROM customer;`.

#### 2. **Python Environment Setup**

* Install the required libraries in your Python environment:

  * pandas
  * seaborn
  * matplotlib
  * mysql-connector-python
* Write code to:

  * Load the dataset using Pandas.
  * Explore the data with `value_counts`, `groupby`, and descriptive statistics.
  * Visualize relationships using bar charts and heatmaps with Seaborn/Matplotlib.

#### 3. **Power BI Dashboard Setup**

* Open Power BI Desktop.
* Load data from MySQL by choosing the SQL Server option.
* When prompted for encryption settings, click on **Advanced** and set:

  * `TrustServerCertificate=True`
* Load the necessary tables into Power BI.
* Create charts, graphs, and slicers to visualize:

  * Customer income groups
  * Risk weighting
  * Gender-based analysis
  * Credit card ownership patterns

---

### 📊 Key Visualizations

* **Bar Charts** showing value counts across categories like gender, nationality, and income band.
* **Heatmaps** visualizing correlation between numerical features like estimated income, loans, and account balances.
* **Power BI Dashboards** providing dynamic visualizations and filters to analyze banking trends.

---

### 📍 Key Insights Extracted

* Customers with more credit cards generally have higher credit balances.
* A significant relationship exists between income levels and risk weighting.
* Gender-based patterns highlight differences in account ownership and investment behavior.

---

### ✅ Project Status

* ✔️ MySQL schema created and tested
* ✔️ Python scripts developed for EDA
* ✔️ Visualizations created using Seaborn and Matplotlib
* ✔️ Power BI dashboard completed
* 🔜 Machine Learning model for risk prediction (planned)

---

### 👤 Project Author

**Name:** Meenakshi Sinha
**Tools Used:** Python, MySQL Workbench, Power BI
**Platform:** Windows 11
**VS Code & MySQL Workbench Used**

---


