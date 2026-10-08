# Write your MySQL query statement below
select max(salary) as SecondHighestSalary
FROM Employee
WHERE salary < (
    SELECT MAX(salary) FROM Employee
);