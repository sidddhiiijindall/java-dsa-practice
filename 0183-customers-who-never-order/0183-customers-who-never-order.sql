# Write your MySQL query statement below
select name as Customers
from Customers as cust
left join Orders
on Cust.id = Orders.customerID
where customerID is null;